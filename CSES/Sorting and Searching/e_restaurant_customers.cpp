// https://cses.fi/problemset/task/1619
// Given arrival and exit time of n customers,print maxm no of customers at any time
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        int n;
        cin>>n;
        vector<pair<int, int>> events;
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        events.push_back({a, 1});   
        events.push_back({b, -1});  
    }
    sort(events.begin(), events.end());
    
  int max_customers = 0, current = 0;
    for (auto& event : events) {
        current += event.second;
        max_customers = max(max_customers, current);
    }
    cout << max_customers << endl;
    return 0;
}