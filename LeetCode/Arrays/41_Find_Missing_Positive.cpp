#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        // Place each number in its correct position: x → index (x-1)
        for(int i = 0; i < n; i++) {
            while(nums[i] > 0 && nums[i] <= n && nums[i] != nums[nums[i] - 1]){
                // nums[i] != nums[nums[i] - 1] ==> Correct Position
                // Coorect Position of Value "X" will be at Index "X-1"
                swap(nums[i], nums[nums[i] - 1]);
            }
        }

        // If nums[i] != nums[nums[i] - 1] then, misssing = i + 1
        for(int i = 0; i < n; i++) {
            if(nums[i] != i + 1) return i + 1;
        }

        // If all 1..n are present, answer is n+1
        return n + 1;
    }
};

// Technique:
// Cyclic Sort (In-place permutation for range [1,n])

// Intuition:
// Place Every Unique Element in it Correct Position

// Approach:
// 1. For each nums[i] = x where 1 ≤ x ≤ n:
//    - Swap x to its correct position: index (x-1)
//    - Repeat until x is in correct position or out of range
// 2. First index i where nums[i] != (i+1) gives missing number
// 3. If all positions correct, return n+1

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