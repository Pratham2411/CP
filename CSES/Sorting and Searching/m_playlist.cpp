// https://cses.fi/problemset/task/1141/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    set<int> s;
    int ans = 0;
    int left = 0;

    for(int right = 0; right < n; right++) {
        while(s.count(v[right])) {
            s.erase(v[left]);
            left++;
        }
        
        s.insert(v[right]);
        ans = max(ans, (int)s.size());
    }

    cout << ans;
}
