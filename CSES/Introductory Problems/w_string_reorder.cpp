#include <bits/stdc++.h>
using namespace std;
bool can_complete(int n, const vector<int>& freq) {
    for (int count : freq) {
        if (count > (n + 1) / 2) return false;
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    int n = s.length();
    vector<int> freq(26, 0);
    for (char c : s) freq[c - 'A']++;

    // Initial feasibility check
    if (!can_complete(n, freq)) {
        cout << -1 << endl;
        return 0;
    }

    string result = "";
    char last = '#';

    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = 0; j < 26; j++) {
            char current = 'A' + j;
            if (freq[j] > 0 && current != last) {
                // Try placing this character
                freq[j]--;
                if (can_complete(n - 1 - i, freq)) {
                    result += current;
                    last = current;
                    found = true;
                    break;
                }
                // Backtrack if it violates feasibility
                freq[j]++;
            }
        }
        if (!found) {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << result << endl;
    return 0;
}
