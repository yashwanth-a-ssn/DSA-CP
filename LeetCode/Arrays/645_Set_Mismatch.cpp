#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        long long n = nums.size();
        long long s = 0, s2 = 0;
        long long sn = (n*(n+1)/2);
        long long s2n = (n*(n+1)*(2*n+1)) / 6;


        for(int i = 0; i<n; i++){
            s += nums[i];
            s2 += pow(nums[i],2);
        }
        // x => Repeating
        // y => Missing
        long long val1 = s - sn; // x-y
        long long val2 = s2 - s2n; //x^2 - y^2 = (x-y)(x+y)
        val2 = val2/val1; // Now, val2 = x+y
        long long repeating = (val1+val2)/2; // x = ((x-y) + (x+y)) / 2
        long long missing = repeating - val1; // y = x - (x-y)

        return {int(repeating), int(missing)};
    }
};

// Technique:
// Algebraic Equation
// Sum of N Natural Nos & Sum of Squares of N Natural Nos 

// Approach:
// Calculate the expected sum (sn) and sum of squares (s2n) for numbers 1 to n using formulas.
// Compute the actual sum (s) and sum of squares (s2) from input array.
// The difference between actual and expected sums gives x−y (repeating - missing).
// The difference between actual and expected sum of squares gives x^2−y^2
// Solve Eq x - y & x^2−y^2 and find the value of X(Repeating) & Y(Missing)
// Return the pair [repeating, missing].

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