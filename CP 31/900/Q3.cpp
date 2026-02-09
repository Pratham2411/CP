#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n, k, x; 
        cin >> n >> k >> x;
        
        if (k > n) {
            cout << "NO" << "\n";
        } else {
            long long minm = k * (k + 1) / 2;
            long long maxm = (n * (n + 1) / 2) - ((n - k) * (n - k + 1) / 2);
            
            if (x >= minm && x <= maxm) {
                cout << "YES" << "\n";
            } else {
                cout << "NO" << "\n";
            }
        }
    }
    return 0;
}
