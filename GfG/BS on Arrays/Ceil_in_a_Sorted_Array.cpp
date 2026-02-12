#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findCeil(vector<int>& arr, int x) {
        auto it = lower_bound(arr.begin(), arr.end(), x);
        if (it == arr.end())
            return -1;
        return it - arr.begin();
    }
};

// Ceil:
// The ceil of a target in a sorted array is the smallest element greater than or equal to the target.
// It represents the closest element on or above the target value within the array.

// Technique:
// Binary Search (Using STL Lower Bound)

// Approach:
// Use C++ STL lower_bound to find the iterator pointing to the first element greater than or equal to the target.
// If iterator reaches end, no ceil element exists; return -1.
// Otherwise, return the index pointed by the iterator as the ceiling element index.

// TC: O(log n) due to binary search in lower_bound
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