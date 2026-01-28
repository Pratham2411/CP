#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n-1);
        int sum=0;
        for(int i=0;i<n-1;i++){
            int x;
            cin>>x; sum+=x;
        };
        cout<< -sum <<"\n";

    }
    return 0;
}


