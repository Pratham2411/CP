// https://codeforces.com/problemset/problem/1890/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int, int> freq;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            freq[a[i]]++;
        }
        if (freq.size() == 1) {
            cout << "Yes\n";
        } else if (freq.size() == 2) {
            auto it = freq.begin();
            int f1 = it->second;
            it++;
            int f2 = it->second;
            if ((n % 2 == 0 && f1 == f2) || (n % 2 == 1 && abs(f1 - f2) == 1)) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        } else {
            cout << "No\n";
        }
    }
    return 0;
}


