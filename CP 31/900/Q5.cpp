#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n; 
        cin >>n;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
        }
        if (n % 2 == 0) 
		{
			cout << 2 << endl; 
			cout << 1 << " " << n << endl; 
			cout << 1 << " " << n << endl; 
		}
		else 
		{
			cout << 4 << endl; 
			cout << 1 << " " << n - 1 << endl; 
			cout << 1 << " " << n - 1 << endl; 
			cout << n - 1 << " " << n << endl; 
			cout << n - 1 << " " << n << endl;       
    }
}
}
