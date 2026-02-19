// https://cses.fi/problemset/task/1635
// Consider a money system consisting of n coins. Each coin has a positive integer value. Your task is to calculate the number of distinct ways you can produce a money sum x using the available coins.
// For example, if the coins are \{2,3,5\} and the desired sum is 9, there are 8 ways
#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int dp[1000001];

int f(int rem, vector<int>&coins){

    if(rem==0) return 1;

    if(rem<0) return 0;

    if(dp[rem]!=-1) return dp[rem];

    long long ans=0;

    for(int c:coins){
        ans+=f(rem-c,coins);
        if(ans>=mod) ans-=mod;
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