#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int length = nums.size();

        if(k == 1) return 0;

        int minDiff = INT_MAX;

        for(int i = 0; i < length-k+1; i++){
            int low = nums[i];
            int high = nums[i+k-1];

            minDiff = min(minDiff, high-low);
        }

        return minDiff;
    }
};

// Technique:
// Sorting + Sliding Window Minimum Range

// Approach:
// Sort array first to get consecutive elements together.
// For k=1, difference is trivially 0.
// Slide window of size k over sorted array, compute max-min for each window.
// Track global minimum difference across all valid windows of size k.

// TC: O(N log N) + O(N) => O(N log N)
// SC: O(1)

// Verdict: Optimal

int main(){
    // Main Function placeholder for testing
    return 0;
}