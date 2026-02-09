#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n,d;
    cin>>n>>d;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    sort(begin(a),end(a));
    long long rem=n;
    int ans=0;
    int j=n-1;
    while(rem>0 && j>=0){
        long long req=d/a[j]+1;
       if(rem-req>=0) ans++;
       rem-=req;
       j--;
    }
    cout<<ans<<"\n";

}
