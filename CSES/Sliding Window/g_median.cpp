// https://cses.fi/problemset/task/1076/
// print medians of all k size window
// median is middle element if all elements are sorted (if two take smaller as median)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void balance(multiset<ll>& leftSet, multiset<ll>& rightSet){
    while(leftSet.size() < rightSet.size()){
        ll val = *rightSet.begin();
        leftSet.insert(val);
        rightSet.erase(rightSet.begin());
    }
    while(leftSet.size() > rightSet.size() + 1){
        ll val = *leftSet.rbegin();
        rightSet.insert(val);
        leftSet.erase(leftSet.find(val));
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin>>n>>k;
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

   // two multisets
   // approach:- jo bhi element aaye left set me dalo
   // phir balance karo so that left ka size >= right
   // aur left ka max hi median hoga

    multiset<ll> leftSet; // maxheap
    multiset<ll> rightSet; // minheap


    for(int i=0;i<k;i++){
        leftSet.insert(arr[i]);
        ll val = *leftSet.rbegin();
        rightSet.insert(val);
        leftSet.erase(leftSet.find(val));
        balance(leftSet,rightSet);
    }

    cout<<*leftSet.rbegin()<<" ";

    
    int left=0,right=k;
    while(right<n){
        ll num=arr[right];

        // insert new element
        leftSet.insert(num);
        ll val = *leftSet.rbegin();
        rightSet.insert(val);
        leftSet.erase(leftSet.find(val));

        // remove old element (jis set me ho usme se)
        ll old=arr[left];
        if(leftSet.find(old)!=leftSet.end())
            leftSet.erase(leftSet.find(old));
        else
            rightSet.erase(rightSet.find(old));

        balance(leftSet,rightSet);

        cout<<*leftSet.rbegin()<<" ";

        left++; right++;
    }
}
