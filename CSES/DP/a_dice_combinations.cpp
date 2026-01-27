// https://cses.fi/problemset/task/1633
// count the number of ways to construct sum n by throwing a dice one or more times. Each throw produces an outcome between 1 and  6.
#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<int> dp(n+1);
    dp[0]=1;

    for(int i=1;i<=n;i++){
        for(int d=1;d<=6 && i-d>=0;d++){
            dp[i]+=dp[i-d];
            if(dp[i]>=mod) dp[i]-=mod;
        }
    }
    cout<<dp[n];
}
