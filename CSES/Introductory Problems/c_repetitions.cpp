// https://cses.fi/problemset/task/1069
// Find the longest repeating sequence in a string
// https://cses.fi/problemset/task/1083
// You are given all numbers between 1 to n except one, find the number
// https://cses.fi/problemset/task/1068
// If n is even divide by 2, if odd mul by 3 and add 1, repeat till n=1
// print all values of n during this

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int len=1,curr=1;
    int i=1;
    while(i<s.size()){
       if(s[i]==s[i-1]){
         curr++;
         len=max(len,curr);
       }
       else curr=1; 
       i++;
    }
    cout<<len<<"\n";
}
