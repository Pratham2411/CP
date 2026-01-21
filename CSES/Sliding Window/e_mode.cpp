// https://cses.fi/problemset/task/3224
// Print the mode of each window
// The  mode is the most frequent element in an array. If there are several possible modes, choose the smallest of them.

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];


    map<int,int> freq; // num,freq
    set<pair<int,int>> s; // (-freq,num) to get smallest
    // for largest use freq,num and s.rbegin()->second

    for(int i=0;i<k;i++){
        int num=a[i];
        if(freq[num]!=0) s.erase({-freq[num],num});
        freq[num]++;
        s.insert({-freq[num],num});
    }
    cout<<s.begin()->second<<" ";

    int left=0,right=k;
    while(right<n){
        int num=a[right];
        if(freq[num]!=0) s.erase({-freq[num],num});
        freq[num]++;
        s.insert({-freq[num],num});

        int old=a[left];
        s.erase({-freq[old],old}); // phle hatao phir dekho
        freq[old]--;
        if(freq[old]!=0) s.insert({-freq[old],old});
        cout<<s.begin()->second<<" ";
        left++; right++;
    }
}







