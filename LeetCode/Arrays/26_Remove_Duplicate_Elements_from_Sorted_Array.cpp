#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int newIndex = 1;
        for(int i = 1; i < n; i++){ // i = 1 i.e., Leaving the first element since it is always unique in a Sorted Array
            if(nums[i] != nums[newIndex - 1]){ 
                nums[newIndex] = nums[i]; // In-Place Switching
                newIndex++;
            }
        }
        return newIndex; // Returning the Unique No of Elements
    }
};
// Technique:
// Two-Pointer

// Approach: Traverse and find the unique elements in a Sorted Array and switch them in-place.
// Return the Unique No of Elements

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