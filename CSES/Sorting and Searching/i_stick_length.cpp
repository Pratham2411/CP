// https://cses.fi/problemset/task/1074
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(begin(v),end(v));
    int med=v[n/2];
    long long ans=0;
    for(int x:v) ans+=abs(x-med);
    cout<<ans;
}
