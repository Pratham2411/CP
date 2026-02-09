#include <bits/stdc++.h>
using namespace std;

void print(vector<long long>&ans){
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<(i == ans.size()-1 ? "" : " ");
    cout<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n,k,b,s;
        cin>>n>>k>>b>>s;
        
        if(s < k*b || s > k*b + n*(k-1)){
            cout << "-1" << "\n";
        }
        else {
            vector<long long> ans(n, 0);
            ans[n-1] = k*b;
            long long rest = s - k*b;
            
            for(int i = 0; i < n && rest > 0; i++) {
                long long add = min(rest, k-1);
                ans[i] += add;
                rest -= add;
            }
            print(ans);
        }
    }
    return 0;
}
