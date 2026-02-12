#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int sum = 0;
        for(int i = 0; i<nums.size(); i++){
            sum += nums[i];
            maxi = max(sum, maxi);

            if(sum < 0) sum = 0;
        }
        return maxi;
    }
};

// Algorithm: Kadence's Algorithm - Maximum Subarray Sum

// Approach: Traverse the array while keeping a running sum of the current subarray.
// If the sum becomes negative, reset it to 0, and track the maximum sum found so far as the result.

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