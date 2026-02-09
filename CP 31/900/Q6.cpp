#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        int ans = 0;
        
        for (long long i = 1; i <= 100; i++) {
            int current = 0;
            long long j = i;
          
            while (n % j == 0) {
                current++;
                j++;
            }
            ans = max(ans, current);
        }
        cout << ans << "\n";
    }
    return 0;
}
