#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        int ops = 0;
        bool found = false;

        // Try at most 6 times (safe upper bound for n, m ≤ 100)
        for (int i = 0; i < 6; i++) {
            if (x.find(s) != string::npos) {
                cout << ops << "\n";
                found = true;
                break;
            }
            x += x;
            ops++;
        }

        if (!found) cout << -1 << "\n";
    }
    return 0;
}
