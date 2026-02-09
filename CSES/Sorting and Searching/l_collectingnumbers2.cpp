// https://cses.fi/problemset/task/2217
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    
    vector<int> v(n + 1); 
    vector<int> pos(n + 1);
    
    for(int i = 1; i <= n; i++){
        cin >> v[i];
        pos[v[i]] = i;
    }

    long long ans = 1; 
    for(int i = 1; i < n; i++){
        if(pos[i+1] < pos[i]) ans++;
    }

    while(m--) {
        int a, b; 
        cin >> a >> b;

        int val_a = v[a];
        int val_b = v[b];

        // affected pairs
        set<pair<int, int>> pairs;
        if(val_a > 1) pairs.insert({val_a - 1, val_a});
        if(val_a < n) pairs.insert({val_a, val_a + 1});
        if(val_b > 1) pairs.insert({val_b - 1, val_b});
        if(val_b < n) pairs.insert({val_b, val_b + 1});

        // Subtract the old contributions of these pairs
        for(auto p : pairs) {
            if(pos[p.second] < pos[p.first]) ans--;
        }

        // Perform the swap
        swap(v[a], v[b]);
        pos[val_a] = b;
        pos[val_b] = a;

        //  Add the new contributions of these pairs
        for(auto p : pairs) {
            if(pos[p.second] < pos[p.first]) ans++;
        }

        cout << ans << "\n";
    }
}
