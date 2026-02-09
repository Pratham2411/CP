#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;
    long long ans = 0;
    while (n > 0) {
        ans += n / 5;
        n /= 5;
    }
    cout << ans << endl;
    return 0;
}
