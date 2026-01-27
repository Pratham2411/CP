#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<long long> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        vector<pair<long long,int>> v;
        for(int i=0;i<n;i++){
            long long rem=a[i]%k;
            if(rem==0) rem=k;
            v.push_back({-rem,i+1});
        }

        sort(v.begin(),v.end());

        for(auto x:v) cout<<x.second<<" ";
        cout<<"\n";
    }
    return 0;
}