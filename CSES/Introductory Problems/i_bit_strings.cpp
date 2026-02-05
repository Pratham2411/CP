#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    const int MOD=1e9+7;
    int ans=2;
    for(int i=1;i<n;i++){
       ans=(ans*2)%MOD;
       
    }
   cout<<ans<<"\n";
}