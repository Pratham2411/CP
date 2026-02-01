#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    int ans = 2e9; 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ans = min(ans, abs(x));
    }

    cout << ans << endl;

    return 0;
}
