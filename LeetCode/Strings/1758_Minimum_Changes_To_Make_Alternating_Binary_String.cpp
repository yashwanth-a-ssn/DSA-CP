#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(string s) {
        int len = s.size();
        char evenPos = s[0];
        char oddPos = (s[0] == '0')?'1':'0';

        int ops = 0;

        for(int i = 1; i < len; i++){
            if(i % 2 == 0 && s[i] != evenPos) ops++;
            if(i % 2 == 1 && s[i] != oddPos) ops++;
        }

        return min(len - ops, ops);
    }
};

// Technique:
// Greedy (Pattern Matching)

// Approach:
// There are only two valid alternating binary patterns:
// "010101..." and "101010...".
// Count the number of mismatches with one assumed pattern
// based on the first character. The other pattern will
// automatically have the remaining mismatches.
// The minimum flips required is the minimum between
// the counted mismatches and its complement.

// TC: O(N)
// N => Length of the string
// SC: O(1)

// Verdict: Optimal

int main()
{
    // Main Function placeholder for testing
    return 0;
}