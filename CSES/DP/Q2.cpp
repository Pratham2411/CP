 // https://cses.fi/problemset/task/1634
// Consider a money system consisting of n coins. Each coin has a positive integer value. Your task is to produce a sum of money x using the available coins in such a way that the number of coins is minimal.
// For example, if the coins are \{1,5,7\} and the desired sum is 11, an optimal solution is 5+5+1 which requires 3 coins.
#include<bits/stdc++.h>
using namespace std;

int dp[1000001];

int f(int rem, vector<int>&coins){

    if(rem==0) return 0;

    if(rem<0) return 1e9;

    if(dp[rem]!=-1) return dp[rem];

    int ans=1e9;

    for(int c:coins){
        ans=min(ans,1+f(rem-c,coins));
    }

    return dp[rem]=ans;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    memset(dp,-1,sizeof(dp));

    int n,x;
    cin>>n>>x;

    vector<int> coins(n);

    for(int i=0;i<n;i++) cin>>coins[i];

    int ans=f(x,coins);

    if(ans>=1e9) cout<<-1;
    else cout<<ans;
}


