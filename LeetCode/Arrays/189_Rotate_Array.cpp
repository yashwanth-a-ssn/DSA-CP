#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to Rotate Array Elements to the Right by K Steps 
    void rotate(vector<int>& nums, int k) {
        // Edge Case, when K > Size of the Array, find the modulus to find the exact No of Roatations
        k = k % nums.size();

        // Reversal using in-built function in C++ STL
        reverse((nums.end() - k), nums.end()); // Reversing last K elements
        reverse(nums.begin(), (nums.end() - k)); // Reversing the rest
        reverse(nums.begin(), nums.end()); // Entire Reversal
    }
};

// Technique:
// Reversal Algorithm for Array Rotation


// Approach:
// Split the given Array into 2 Hypothetical Arrays based on K value
// i.e., last K elements as 1st Array and the rest as 2nd Array.
// Reverse each of them individually once. Then, reverse the entire Array once.

// TC: O(N) ==> O(K) + O(N-K) + O(N) ≈ O(N) 
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