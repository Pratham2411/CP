// https://codeforces.com/problemset/problem/1896/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
       vector<int>arr(n+1);
       for(int i=1;i<=n;i++) cin>>arr[i];
        int maxm=n;
        bool flag=true;
        while(maxm>0){
            if(arr[maxm]==maxm) maxm--;
            else if(arr[1]==maxm){flag=false; break;}
            else maxm--;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
       
    }
    return 0;
}
