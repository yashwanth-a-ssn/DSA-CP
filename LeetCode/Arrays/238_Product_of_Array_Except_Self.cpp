#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        
        int prefixPro = 1;
        for (int i = 0; i < n; i++) {
            ans[i] = prefixPro;
            prefixPro *= nums[i];
        }
        
        int suffixPro = 1;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= suffixPro;
            suffixPro *= nums[i];
        }
        
        return ans;
    }
};

// Technique:
// Two-Pass
// Prefix Product & Sufffix Product (Since we might encounter negative elements)

// Approach:
// Step 1 => Traverse the array from left to right and compute prefix products.
//           Store prefix product up to but not including current index in ans array.
// Step 2 => Traverse the array from right to left computing suffix products on the fly.
//           Multiply each ans[i] with suffix product of elements to the right.
// Step 3 => This handles zeros gracefully and produces product of all elements except self.

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