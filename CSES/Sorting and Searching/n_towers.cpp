// https://cses.fi/problemset/task/1073
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i]; 
    int ans = 1;
    vector<int> temp;
    temp.push_back(v[0]);
    for(int i=1;i<n;i++){
        auto it=upper_bound(temp.begin(),temp.end(),v[i]);
        if(it==temp.end())  temp.push_back(v[i]);     
        else *it=v[i];
    }

    cout << temp.size();
}
