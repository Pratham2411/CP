#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n; 
        cin>>n;
        long long a,b;
        long long lcm=1e9;
        long long hcf=n; // divisor actully
        if(n==2) cout<<1<<" "<<1<<"\n";
        else{
          for(long long i=2;i*i<=n;i++){
             if(n%i==0){
                hcf=i;
                break;
             }
          }
          a=n/hcf;
          b=n-a;
        cout<<a<<" "<<b<<"\n";
        }
        
        
    }
    return 0;
}
