// https://cses.fi/problemset/task/1621
// calculate no of distinct values in a list
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        int n;
        cin >> n;
        set<ll>s;
        for (int i=0;i<n;i++){
            ll num;
            cin>>num;
            s.insert(num);
        }
        cout<<s.size()<<"\n";

        

    return 0;
}
