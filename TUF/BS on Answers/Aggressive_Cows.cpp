#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool canWePlace(vector<int> &nums, int dist, int cows){
        int n = nums.size(); 
        int cntCows = 1; 
        int last = nums[0]; 
        
        for(int i = 1; i < n; i++){
            if(nums[i] - last >= dist){
                cntCows++; 
                last = nums[i]; 
            }
            if(cntCows >= cows) return true;
        }

        return false;
    }

public:
    int aggressiveCows(vector<int> &nums, int k){
        int n = nums.size(); 
        sort(nums.begin(), nums.end());
        
        int low = 1;
        int high = nums[n-1] - nums[0];

        while(low <= high){
            int mid = (low + high) / 2;

            if(canWePlace(nums, mid, k) == true){
                low = mid + 1;
            }
            else high = mid - 1;
        }

        return high;
    }
};

// Technique:
// BS – Binary Search on Answer

// Approach:
// Sort the stall positions and apply binary search on the
// minimum distance between cows.
// Use greedy placement to check feasibility for a given distance
// and adjust the search space to maximize the valid distance.

// TC: O(N) x O(log M) = O(N log M)
// N => Number of stalls
// M => Search space for minimum distance = nums[n-1] − nums[0]
// SC: O(1)

// Verdict: Optimal


int main()
{
    // Main Function placeholder for testing
    return 0;
}