// https://cses.fi/problemset/task/1094
// make array increasing in minm moves
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    long long ans=0;
    for(int i=1;i<n;i++) if(a[i-1]>a[i]){
     ans+=a[i-1]-a[i];
     a[i]=a[i-1];
    }
    cout<<ans<<"\n";
}