// https://cses.fi/problemset/task/3221
// print xor of minimum of all k size window
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin>>n>>k;

    ll x,a,b,c;
    cin>>x>>a>>b>>c;

    vector<ll> arr(n);
    arr[0]=x;
    for(int i=1;i<n;i++) arr[i]=(a*arr[i-1]+b)%c;
   // (set+map) will not work
    deque<int> dq; // bcz constrains are high here 1e7, unlike previous problems
    // minimum element will be in the front
    // logic:- maintain an increasing deque(use indices to handle duplicate)
    for(int i=0;i<k;i++){
        while(!dq.empty() && arr[dq.back()]>=arr[i])
            dq.pop_back();
            dq.push_back(i);
    }

    ll ans=arr[dq.front()];

    
    int left=0,right=k;
    while(right<n){

        // agr mimimum hi left hai (isiliye index use kiya tha )
        if(dq.front()==left)
            dq.pop_front();

        // adding new element
        while(!dq.empty() && arr[dq.back()]>=arr[right])
            dq.pop_back();
        dq.push_back(right);

        ans^=arr[dq.front()];

        left++; right++;
    }

    cout<<ans<<" ";
}
