#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        long long ans=0; long long second_sum=0; int min_second=1e9,min_first=1e9;
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            vector<int> temp(m);
            for(int i=0;i<m;i++) cin>>temp[i];
            sort(temp.begin(),temp.end());
            second_sum+=temp[1];
            min_first=min(min_first,temp[0]);
            min_second=min(min_second,temp[1]);
        }
      ans=second_sum-min_second+min_first;
       cout<<ans<<"\n";  
    }
    return 0;
}