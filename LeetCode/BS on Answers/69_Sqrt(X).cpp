#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int low = 1;
        int high = x;

        while(low <= high){
            long mid = low + (high - low) / 2;

            if(mid * mid == x) return mid;
            else if(mid * mid > x) high = mid - 1;
            else low = mid + 1;
        }
        
        return high;
    }
};

// Technique:
// BS - Binary Search on Answers

// Approach:
// Use binary search on range [1, x]
// - Calculate mid = low + (high - low)/2 to avoid overflow
// - If midmid == x, return mid (exact root)
// - If midmid > x, move search to left half (high = mid - 1)
// - Else move search to right half (low = mid + 1)
// If no exact root found, high ends at floor(sqrt(x))

// TC: O(log X)
// SC: O(1)

// Verdict: Optimal

// GitHub: https://github.com/yashwanth-a-ssn
// LeetCode: https://leetcode.com/u/yashwanth-a-ssn/
// CodeForces: https://codeforces.com/profile/yashwanth-a-ssn

int main()
{
    // Main Function placeholder for testing
    return 0;
}