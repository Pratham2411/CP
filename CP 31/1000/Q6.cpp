#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n,k,q;
        cin >> n >> k >> q;

        vector<long long> a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        long long ans = 0;
        int j = 0;
        int count = 0, streak = 0;

        while(j < n){
            if(a[j] <= q){
                count++;
                if(count >= k){
                    streak++;
                    ans += streak;
                }
            } else {
                count = 0;
                streak = 0;
            }
            j++;
        }
        cout << ans << "\n";
    }
    return 0;
}