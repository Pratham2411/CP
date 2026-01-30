// http://cses.fi/problemset/task/1090
// https://cses.fi/problemset/task/1621
// calculate no of distinct values in a list
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        int count=0;
        int i=0,j=n-1;
        while(i<=j){ 
          if(i==j || a[i]+a[j]<=x) {i++;j--;}
          else j--;
          count++;

        }
        cout<<count<<"\n";
    return 0;
}
