#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n>>k;
        bool f=0;
        for (int i = 0; i < n; i++){
            int temp;
            cin>>temp;
            if(temp==k) f=1;
        }
        if(f) cout<<"Yes"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
