#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n; 
        cin >> n;
        vector<long long> a(n),b,c;
        long long maxe=0;
        for(int i=0;i<n;i++){
            cin>>a[i]; 
            if(a[i]>maxe) maxe=a[i];
        }
        for(auto &x:a){
            if(x==maxe) c.push_back(x);
            else b.push_back(x);
        }
        if(b.empty() ||c.empty()) cout<< -1<<endl;
        else{
          cout<<b.size()<<" "<<c.size()<<"\n";
        for(int i=0;i<b.size();i++) cout<<b[i]<<" ";
        cout<<"\n";
        for(int i=0;i<c.size();i++) cout<<c[i]<<" ";
        cout<<"\n";
        }
        
    }
    return 0;
}
