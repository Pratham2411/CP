// // https://cses.fi/problemset/task/1070
// A permutation of integers is called beautiful if there are no adjacent elements whose difference is 1.
// Given n construct a premutation if possible

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<long long>a(n);
    if(n==1) cout<<1<<"\n";
    else if(n<=3) cout<<"NO SOLUTION"<<"\n";
    else if(n==4) cout<<2<<" "<<4<<" "<<1<<" "<<3;
    else{
        if(n%2){
            int i=n-1; int j=0;
            while(i>0){
                a[j]=i;
                j++; i-=2;
            }
            i=n;
            while(i>0){
               a[j]=i;
               j++; i-=2;
            }
        }
        else{
           int i=n,j=0;
            while(i>0){
               a[j]=i;
               j++; i-=2;
            }
             i=n-1;
            while(i>0){
                a[j]=i;
                j++; i-=2;
            }
        }
        for(auto &x:a) cout<<x<<" ";
    }
   
}
