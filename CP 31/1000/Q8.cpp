#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> m1(26, 0), m2(26, 0);
        
        for (char c : s) {
            m1[c - 'a']++;
        }

        int ans = 0;
        for (int i = 0; i < n - 1; i++) {
            char c = s[i];
            m1[c - 'a']--;
            m2[c - 'a']++;
            int c1 = 0, c2 = 0;
            for (int j = 0; j < 26; j++) {
                if (m1[j] > 0) c1++;
                if (m2[j] > 0) c2++;
            } 
            ans = max(ans, c1 + c2);
        }
        cout << ans << "\n";
    }
    return 0;
}
