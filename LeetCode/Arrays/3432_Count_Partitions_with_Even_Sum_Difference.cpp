#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int sumLeft = nums[0];
        int sumRight = 0;
        int count = 0;

        for(int i = 1; i < n; i++){
            sumRight += nums[i];
        }

        for(int i = 1; i < n; i++){
            if((sumLeft + sumRight) % 2 == 0) count++;
            sumLeft += nums[i];
            sumRight -= nums[i];
        }

        return count;
    }
};

// Technique:
// Prefix Sum
// Two-pointer (Modified)

// Approach:
// 1. Initialize sumLeft with first element and sumRight with sum of the rest
// 2. Iterate through array from index 1 to n-1:
//    - Check if total sum (sumLeft + sumRight) is even
//    - Increment count if condition satisfies (potential partition)
//    - Move current element from sumRight to sumLeft
// 3. Return count of valid partitions

// TC: O(N)
// SC: O(1)

// Verdict: Optimal

int main(){
    // Main Function placeholder for testing
    return 0;
}