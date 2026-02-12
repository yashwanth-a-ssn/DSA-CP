#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> countMap;
        for (int num : nums) {
            countMap[num]++;
            if (countMap[num] > 1) return true;
        }
        return false;
    }
};

// Technique:
// Hashing

// Approach:
// Loop through each element of the array.
// Use a hash map to remember which values have already been seen.
// If the value has been seen before, return true immediately.
// If the loop finishes, return false as no duplicates exist.

// TC: O(N)
// SC: O(N) 

// Verdict: Optimal

// GitHub: https://github.com/yashwanth-a-ssn
// LeetCode: https://leetcode.com/u/yashwanth-a-ssn/
// CodeForces: https://codeforces.com/profile/yashwanth-a-ssn

int main()
{
    // Main Function placeholder for testing
    return 0;
}