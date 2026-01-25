// https://codeforces.com/problemset/problem/1901/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int maxm = arr[0]; 
        for (int i = 1; i < n; i++) {
            maxm = max(maxm, arr[i] - arr[i - 1]); 
        }
        maxm = max(maxm, 2 * (x - arr[n - 1])); 
        cout << maxm << endl;
    }
    return 0; 
}

