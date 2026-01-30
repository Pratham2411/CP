// https://cses.fi/problemset/task/1091
// there are some tickets and then maxm price a customer will pay for a ticket
// a customer will get a ticket nearest to its maxm price(less, not greater)
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin>>n>>m;

    multiset<int> tickets;
    for (int i = 0; i < n; i++) {
        int price;
        cin >> price;
        tickets.insert(price);
    }

    for (int i = 0; i < m; i++) {
        int budget;
        cin >> budget;

        // upper_bound finds the first element strictly > budget
        auto it = tickets.upper_bound(budget);

        // If the iterator is at the beginning, no ticket is <= budget
        if (it == tickets.begin()) {
            cout << -1 << "\n";
        } else {
            // Move back one step to get the largest ticket <= budget
            it--;
            cout << *it << "\n";
            // Erase the specific ticket by iterator to avoid deleting duplicates
            tickets.erase(it);
        }
    }

    return 0;
}
