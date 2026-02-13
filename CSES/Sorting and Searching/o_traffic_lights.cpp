// https://cses.fi/problemset/task/1163
#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int x, n;
  cin >> x >> n;

  set<int> pos = {0, x};
  multiset<int> len;
  len.insert(x);

  for(int i = 0; i < n; i++){
    int p; 
    cin >> p;

    auto it = pos.upper_bound(p);
    int right = *it;
    int left = *prev(it);

    // Using find() ensures we only delete one instance of the length
    len.erase(len.find(right - left));
    
    len.insert(p - left);
    len.insert(right - p);
    pos.insert(p);
    cout << *len.rbegin() << " ";
  }
  cout << "\n";
  
  return 0;
}


