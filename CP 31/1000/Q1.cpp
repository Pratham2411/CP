// https://codeforces.com/problemset/problem/1913/B
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int nz=0,no=0;
        for(auto x:s)
         if(x=='0') nz++;
         else no++;int len=0;
         for(auto x:s){
            if(x=='0' && no>0){no--;len++;}
            else if(x=='1' && nz>0){nz--;len++;}
            else break;
         }
         cout<<s.size()-len<<endl;
    }
    return 0;
}
