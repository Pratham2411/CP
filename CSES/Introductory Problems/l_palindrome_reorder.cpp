// Given a string, your task is to reorder its letters in such a way that it becomes a palindrome 
//https://cses.fi/problemset/task/1755
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; 
    cin >> s;
    vector<int> freq(26, 0);
    for (char c : s) freq[c - 'A']++; 

    int oddCount = 0;
    int oddIndex = -1;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            oddCount++;
            oddIndex = i;
        }
    }

    if (oddCount > 1) {
        cout << "NO SOLUTION" << endl;
    } else {
        string firstHalf = "";
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < freq[i] / 2; j++) {
                firstHalf += (char)(i + 'A');
            }
        }

        string secondHalf = firstHalf;
        reverse(secondHalf.begin(), secondHalf.end());

        if (oddIndex != -1) {
            cout << firstHalf << (char)(oddIndex + 'A') << secondHalf << endl;
        } else {
            cout << firstHalf << secondHalf << endl;
        }
    }
    return 0;
}
