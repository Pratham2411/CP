// https://cses.fi/problemset/task/1068
// If n is even divide by 2, if odd mul by 3 and add 1, repeat till n=1
// print all values of n during this

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    while (true) {
        cout << n;
        if (n == 1) break;
        cout << " ";
        if (n % 2 == 0) n = n / 2;
        else n = 3 * n + 1;
    }
    return 0;
} 

