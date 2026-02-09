// You have n coins with positive integer values. What is the smallest sum you cannot create using a subset of the coins?
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    sort(begin(v),end(v));
    long long ans=1; // jo abhi nhi bn sakta
    for(int i=0;i<n;i++){
      if(v[i]>ans) break;
      else ans+=v[i];
    }

    cout<<ans;
}