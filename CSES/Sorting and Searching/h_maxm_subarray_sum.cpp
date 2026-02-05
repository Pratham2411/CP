#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long max_so_far = -1e18, current_max = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        current_max += x;
        max_so_far = max(max_so_far, current_max);
        if (current_max < 0) current_max = 0;
    }
    cout << max_so_far << endl;
    return 0;
}
