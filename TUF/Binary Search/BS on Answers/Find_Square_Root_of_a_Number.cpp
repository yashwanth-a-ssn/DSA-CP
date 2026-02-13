#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int floorSqrt(int n){
        int low = 1;
        int high = n;
        
        while(low <= high){
            int mid = low + (high - low) / 2;

            long long val = 1LL * mid * mid; 

            if(val <= (long long)n) low = mid + 1;
            else high = mid - 1;
        }
        
        return high;
    }
};

// Technique:
// BS – Binary Search on Answer

// Approach:
// Search for the largest integer whose square is less than or equal to n.
// Use binary search in the range [1, n].
// For a chosen mid, compare mid * mid with n using long long to avoid overflow.
// If mid * mid ≤ n, move right to try larger values; otherwise, move left.
// The final answer is the greatest valid mid, stored in high.

// TC: O(log N)
// SC: O(1)

// Verdict: Optimal

int main()
{
    // Main Function placeholder for testing
    return 0;
}