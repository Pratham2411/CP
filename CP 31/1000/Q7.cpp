#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        map<int, int> ma, mb;
        
        int mc = 1;
        ma[a[0]] = 1;
        for(int i = 1; i < n; i++){
            if(a[i] == a[i-1]) mc++;
            else mc = 1;
            if(mc > ma[a[i]]) ma[a[i]] = mc;
        }

        mc = 1;
        mb[b[0]] = 1;
        for(int i = 1; i < n; i++){
            if(b[i] == b[i-1]) mc++;
            else mc = 1;
            if(mc > mb[b[i]]) mb[b[i]] = mc;
        }

        int ans = 0;
        for (auto &x : ma) {
            int val = x.first;
            int total = x.second + mb[val];
            if (total > ans) ans = total;
        }
        for (auto &x : mb) {
            int val = x.first;
            int total = x.second + ma[val];
            if (total > ans) ans = total;
        }

        cout << ans << "\n";
    }
    return 0;
}
