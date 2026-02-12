#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        for (int i = 1; i < prices.size(); i++) {
            // If price today is higher than yesterday, buy yesterday and sell today to gain profit
            if (prices[i] > prices[i - 1]) {
                profit += prices[i] - prices[i - 1];
            }
        }
        return profit;
    }
};

// Technique:
// Greedy

// Approach:
// Iterate through prices starting from the second day.
// Whenever the price today is higher than yesterday, "buy yesterday and sell today" to capture profit.
// Sum all positive differences between consecutive days to get the maximum achievable profit.
// This simulates making multiple transactions for every profitable segment.

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