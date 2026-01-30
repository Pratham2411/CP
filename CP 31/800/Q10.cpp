#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int points=0;
        for (int i = 0; i < 10; i++)
            for (int j = 0; j < 10; j++){
               char c;
               cin>>c;
               if(c=='X') 
               if(i==0||j==0||i==9||j==9) points+=1;
               else if(i==1||i==8||j==1||j==8)  points+=2;
               else if(i==2||i==7||j==2||j==7)  points+=3;
               else if(i==3||i==6||j==3||j==6)  points+=4;
               else points+=5;
            }    
            cout<<points<<"\n";      
    }
    return 0;
}
