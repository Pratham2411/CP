// https://cses.fi/problemset/task/1083
// You are given all numbers between 1 to n except one, find the number
// https://cses.fi/problemset/task/1068
// If n is even divide by 2, if odd mul by 3 and add 1, repeat till n=1
// print all values of n during this

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int xr=0;
    for(int i=1;i<=n;i++) xr=xr^i;
    for(int i=1;i<=n-1;i++) {
        int num; cin>>num;
        xr=xr^num;
    }
    cout<<xr<<"\n";
}
