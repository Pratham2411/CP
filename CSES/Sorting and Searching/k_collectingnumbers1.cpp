// https://cses.fi/problemset/task/2216
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> pos(n+1);
    for(int i=0;i<n;i++){
        cin>>v[i];
        pos[v[i]]=i;
    }

    long long ans=1; 
    for(int i=n;i>=2;i--){
      if(pos[i]<pos[i-1]) ans++;
    }
   cout<<ans;
}