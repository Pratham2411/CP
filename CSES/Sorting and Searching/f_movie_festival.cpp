#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> movies(n);
    
    for(int i = 0; i < n; i++) {
       // end,start
        cin >> movies[i].second >> movies[i].first;
    }
    
    sort(movies.begin(), movies.end());
    
    int count = 0;
    int current_end = 0;
    
    for(auto movie : movies) {
        if(movie.second >= current_end) {
            count++;
            current_end = movie.first;
        }
    }
    
    cout << count << endl;
    return 0;
}
