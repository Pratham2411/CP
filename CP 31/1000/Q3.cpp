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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        long long ans=k;
        map<int,long long> m;
        for(int i=0;i<n;i++){
            if(b[i]<k) m[b[i]]+=a[i];
        }
        n--;
        for(auto x:m){
            if(n<=0) break;
            int cost=x.first;
            long long people=x.second;
            if(n<=people) {
                ans+=1LL*cost*n;
                n = 0;
                break;
            }
            else{
                ans+=1LL*cost*people;
                n-=people;
                
            }
        }
        if(n>0) ans+=1LL*k*n;
        cout<<ans<<endl;
    }
    return 0;
}