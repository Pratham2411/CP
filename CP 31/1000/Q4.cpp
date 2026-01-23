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
        vector<vector<int>> arr(n);
        int ans=0;
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            vector<int> temp(m);
            for(int i=0;i<m;i++) cin>>temp[i];
            sort(temp.begin(),temp.end());
            ans+=temp[0];
            arr.push_back(temp);
        }
       for(auto array1:arr){
         bool move=0; 
         int benifit=array1[1]-array1[0];
         int maxb=benifit;
         for(auto array2:arr){
            if(array1!=array2){
              int loss=array2[0]-min(array1[0],array2[0]);
              
            }
         }
       }
       cout<<ans<<"\n";  
    }
    return 0;
}
