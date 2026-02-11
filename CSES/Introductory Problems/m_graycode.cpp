// https://cses.fi/problemset/task/2205
// A Gray code is a list of all 2^n bit strings of length n, where any two successive strings differ in exactly one bit (i.e., their Hamming distance is one).
// Your task is to create a Gray code for a given length n.
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; 
    cin>>n;

    //  2^n
    int total_strings = 1 << n;

    for (int i = 0; i < total_strings; i++) {
        int gray_val = i ^ (i >> 1);

        // Convert the integer to a binary string of length n
        // Using bitset is a succinct way to handle leading zeros
        string binary = bitset<16>(gray_val).to_string();
        
        // Print only the last n bits of the 16-bit bitset
        cout << binary.substr(16 - n) << "\n";
    }
    
    return 0;
}

