// https://cses.fi/problemset/task/1637
// Minm steps to make n ero, we can subtract one of the digits at any step

#include<bits/stdc++.h>
using namespace std;
int dp[1000001];

// int f(int curr){
//     if(curr==0) return 0;
//     if(dp[curr]!=-1) return dp[curr];
//     vector<int> digits;
//     int temp=curr;
//     while(temp>0){
//         digits.push_back(temp%10);
//         temp/=10;
//     }
//     int steps=1e9;
//     for(int x:digits){
//          if(x>0)
//       steps=min(steps,1+f(curr-x));
//     }
//     return dp[curr]=steps;
// }

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    memset(dp, 1e9, sizeof(dp));

    int n;
    cin >> n;
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        dp[i] = 1e9;
        int temp = i;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit > 0) {
                dp[i] = min(dp[i], 1 + dp[i - digit]);
            }
            temp /= 10;
        }
    }
    cout << dp[n];
}