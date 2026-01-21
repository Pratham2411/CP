// https://cses.fi/problemset/task/1077
// find cost of making all elements in a window of size k equal
// if you increase/decrease any element by x cost is x
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

multiset<ll> ls, rs;
ll sumL = 0, sumR = 0;

void balance() {
    while (ls.size() > rs.size() + 1) {
        ll x = *ls.rbegin();
        ls.erase(ls.find(x));
        sumL -= x;

        rs.insert(x);
        sumR += x;
    }

    while (rs.size() > ls.size()) {
        ll x = *rs.begin();
        rs.erase(rs.find(x));
        sumR -= x;

        ls.insert(x);
        sumL += x;
    }
}

void add(ll x) {
    // this is also an insert logic
    if (ls.empty() || x <= *ls.rbegin()) {
        ls.insert(x);
        sumL += x;
    } else {
        rs.insert(x);
        sumR += x;
    }
    balance();
}

void removeVal(ll x) {
    if (ls.find(x) != ls.end()) {
        ls.erase(ls.find(x));
        sumL -= x;
    } else {
        rs.erase(rs.find(x));
        sumR -= x;
    }
    balance();
}
 // the imp part
ll getCost() {
    ll med = *ls.rbegin();
    return (med*((ll)ls.size()-(ll)rs.size())) +(sumR-sumL);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    
    for (int i = 0; i < k; i++) {
        add(a[i]);
    }
    cout << getCost() << " ";

    
    int l = 0, r = k;
    while (r < n) {
        add(a[r]);
        removeVal(a[l]);
        cout << getCost() << " ";
        l++;
        r++;
    }
}

