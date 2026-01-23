// https://codeforces.com/problemset/problem/1883/C
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
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        int ans=INT_MAX;
        int ec=0;
        for(auto x:a){
            if(x%2==0) ec++;
            if(x%k==0) ans=0;
            ans=min(ans,k-(x%k));
        }
        if(k==4) if(ec>1) ans=0;
        else if(ec==1) ans=min(ans,1);
        else if(ec==0) ans=min(ans,2);
        cout<<ans<<endl;
    }
    return 0;
}
