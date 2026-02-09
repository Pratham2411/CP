#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        long long n, x;
        cin >> n >> x;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
 
        long long cur_min = a[0] - x;
        long long cur_max = a[0] + x;
        int ans = 0;
 
        for (int i = 1; i < n; i++) {
            cur_min = max(cur_min, a[i] - x);
            cur_max = min(cur_max, a[i] + x);
 
            if (cur_min > cur_max) {
                ans++;
                cur_min = a[i] - x;
                cur_max = a[i] + x;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}