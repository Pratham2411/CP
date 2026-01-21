// https://cses.fi/problemset/task/3426
// print xor of xor all k size window
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,k;
    cin>>n>>k;
    ll x,a,b,c;
    cin>>x>>a>>b>>c;
    
    vector<ll> arr(n);
    arr[0]=x;
    for(int i=1;i<n;i++) arr[i]=(a*arr[i-1]+b)%c;
    
    ll sum=0;
    for(int i=0;i<k;i++) sum+=arr[i];
    ll ans=sum;
    int left=0,right=k;
    while(right<n){
        sum+=arr[right];
        sum-=arr[left];
        left++; right++;
        ans^=sum;
    }
   cout<<ans<<'\n';
    
}


