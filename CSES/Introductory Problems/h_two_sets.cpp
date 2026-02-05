#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long total_sum = n * (n + 1) / 2;
    
    if (total_sum % 2 != 0) {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
    vector<long long> set1, set2;
    long long target = total_sum / 2;

    for (int i = n; i >= 1; i--) {
        if (target >= i) {
            target -= i;
            set1.push_back(i);
        } else {
            set2.push_back(i);
        }
    }

    cout << set1.size() << "\n";
    for (auto x : set1) cout << x << " ";
    cout << "\n" << set2.size() << "\n";
    for (auto x : set2) cout << x << " ";
    cout << endl;

    return 0;
}
