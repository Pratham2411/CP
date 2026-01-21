// https://cses.fi/problemset/task/3222
// Print the number of distinct values in each k size window
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;

    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    map<int,int> m;
    int cnt=0;

    for(int i=0;i<k;i++){
        if(m[arr[i]]==0) cnt++;
        m[arr[i]]++;
    }

    cout<<cnt<<" ";

    int left=0,right=k;
    while(right<n){
        if(m[arr[right]]==0) cnt++;
        m[arr[right]]++;
        right++;

        m[arr[left]]--;
        if(m[arr[left]]==0) cnt--;
        left++;

        cout<<cnt<<" ";
    }
}




