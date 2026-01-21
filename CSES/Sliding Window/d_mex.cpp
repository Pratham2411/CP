// https://cses.fi/problemset/task/3219
// Print the mex of each window
// The mex is the smallest nonnegative integer that does not appear in the array(minm excluded value)

// Note:- mex of any window will be in range [0,k]

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

      vector<int> freq(k+1,0); // only counting numbers upto k
      set<int> missing;
      for(int i=0;i<=k;i++) missing.insert(i); // assuming all missing

      for(int i=0;i<k;i++){
         int num=a[i];
         if(num<=k){
           if(freq[num]==0) missing.erase(num);
           freq[num]++; // inside if hi kro
         }       
      }
      cout<<*missing.begin()<<" ";

      int left=0,right=k;
      while(right<n){
         int num=a[right];
         if(num<=k){
           if(freq[num]==0) missing.erase(num);  // not insert
           freq[num]++;
         }
               
         int old=a[left];
         if(old<=k){
            freq[old]--; 
           if(freq[old]==0) missing.insert(old);  // missing hai mtlb insert
         }

         cout<<*missing.begin()<<" ";  
         left++; right++;
      }
}





