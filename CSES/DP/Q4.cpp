// follow up of previous here you have to count distinct ways only
// https://cses.fi/problemset/task/1636
// #include<bits/stdc++.h>
// using namespace std;

// const int mod = 1e9+7;

// int dp[101][1000001];

// int f(int i, int rem, vector<int>& coins){
//     if(rem == 0) return 1;
//     if(i == coins.size()) return 0;
//     if(dp[i][rem] != -1) return dp[i][rem];
//     long long ans = 0;

//     if(rem >= coins[i])
//         ans += f(i, rem - coins[i], coins);

//     ans += f(i+1, rem, coins);

//     return dp[i][rem] = ans % mod;
// }

// int main(){

//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     memset(dp, -1, sizeof(dp));

//     int n, x;
//     cin >> n >> x;

//     vector<int> coins(n);
//     for(int i = 0; i < n; i++) cin >> coins[i];

//     cout << f(0, x, coins);
// }

#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;

    vector<int> coins(n);
    for(int i = 0; i < n; i++) cin >> coins[i];

    vector<int> dp(x+1, 0);

    dp[0] = 1;

    for(int i = 0; i < n; i++){
        for(int sum = coins[i]; sum <= x; sum++){
            dp[sum] = (dp[sum] + dp[sum - coins[i]]) % mod;
        }
    }

    cout << dp[x];
}


