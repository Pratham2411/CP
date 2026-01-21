// https://cses.fi/alon/task/2220

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll dp[20][2][11][2];

ll f(string s, ll index, ll tight, ll prevdigit, ll leadingZero) {
    if (index == (ll)s.size()) return 1;

    if (dp[index][tight][prevdigit][leadingZero] != -1)
        return dp[index][tight][prevdigit][leadingZero];

    ll count = 0;
    ll limit = tight ? (s[index] - '0') : 9;

    for (ll curr = 0; curr <= limit; curr++) {
        if (!leadingZero && curr == prevdigit) continue;

        ll newleadingzero = (leadingZero && curr == 0);
        ll newtight = (tight && curr == limit);

        ll nextPrev = newleadingzero ? 10 : curr;
        count += f(s, index + 1, newtight, nextPrev, newleadingzero);
    }

    return dp[index][tight][prevdigit][leadingZero] = count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b;
    cin >> a >> b;

    string s1 = to_string(a - 1);
    string s2 = to_string(b);

    memset(dp, -1, sizeof(dp));
    ll countB = f(s2, 0, 1, 10, 1);

    memset(dp, -1, sizeof(dp));
    ll countA = f(s1, 0, 1, 10, 1);

    cout << countB - countA << '\n';
    return 0;
}


