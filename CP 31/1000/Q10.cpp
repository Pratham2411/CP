#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
    int n;
    char c;
    string s;
    cin >> n >> c >> s;
    if (c=='g') {
        cout << 0 << endl;
       
    }
    else{
    int ans=0;
    n=2*n;
    s+=s;
    int last=-1;
    for(int i=n-1;i>=0;i--){
       if(s[i]=='g') last=i;
       if(s[i]==c && last!=-1) ans=max(ans,last-i);
    }
    cout<<ans<<"\n";
    }
}
    return 0;
}
