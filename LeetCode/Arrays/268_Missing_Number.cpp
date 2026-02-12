#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the missing element in an Unsorted Array
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        // Edge Case
        int missing = n; // Initializing with last/highest value
        for(int i = 0; i<n; i++){
            missing = missing ^ i ^ nums[i];
        }
        return missing;
    }
};

// Technique:
// XOR Gate Properties

// Approach:
// Using the XOR operator's properties that identical values cancel out,
// all numbers except the missing one are eliminated, leaving the missing number as the result.

// Proprty:
//  1) x ^ x = 0
//  2) x ^ 0 = x

// TC: O(N)
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