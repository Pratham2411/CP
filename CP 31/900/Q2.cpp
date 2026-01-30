#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        string s;
        cin >> s;
        map<char,int> m;
        for(char c:s) m[c]++;
        int min_count=0;
        for(auto &x:m) if (x.second % 2 != 0) min_count++;
        min_count--;
        if(k>n||k<min_count) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }
    return 0;
}
