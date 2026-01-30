// https://cses.fi/problemset/task/1071
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t; 
    while (t--) {
        long long y, x;
        cin >> y >> x;
        
        if (x < y) {
            long long ans;
            if (y % 2 != 0)
                ans = (y - 1) * (y - 1) + x; 
            else
                ans = y * y - x + 1;     
            cout << ans << "\n";
        } 
        else {
            long long ans;
            if (x % 2 != 0)
                ans = x * x - y + 1;         
            else
                ans = (x - 1) * (x - 1) + y; 
            cout << ans << "\n";
        }
    } 
    return 0;
}

