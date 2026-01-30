#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b;
        cin >> a >> b;

        int x1,y1;
        cin >> x1 >> y1;

        int x2,y2;
        cin >> x2 >> y2;

        set<pair<int,int>> s1, s2;

        int dx[2] = {a, b};
        int dy[2] = {b, a};

        for(int i=0;i<2;i++){
            for(int sx : {-1, 1}){
                for(int sy : {-1, 1}){
                    s1.insert({x1 + sx*dx[i], y1 + sy*dy[i]});
                    s1.insert({x1 + sx*dy[i], y1 + sy*dx[i]});
                }
            }
        }

        for(int i=0;i<2;i++){
            for(int sx : {-1, 1}){
                for(int sy : {-1, 1}){
                    s2.insert({x2 + sx*dx[i], y2 + sy*dy[i]});
                    s2.insert({x2 + sx*dy[i], y2 + sy*dx[i]});
                }
            }
        }

        int count = 0;
        for(auto p : s1){
            if(s2.count(p)) count++;
        }
        cout << count << "\n";
    }
    return 0;
}