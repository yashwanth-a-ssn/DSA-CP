#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 1;
        int high = nums.size() - 2;

        // Edge Cases
        if(nums.size() == 1) return 0;

        if(nums[0] > nums[1]) return 0;
        if(nums[nums.size() - 1] > nums[nums.size() - 2]) return nums.size() - 1;

        
        while(low <= high){
            int mid = (low+high) / 2;

            // Peak
            if(nums[mid-1] < nums[mid]  && nums[mid] > nums[mid+1]){
                return mid;
            }
            // Raisng Slope
            else if(nums[mid-1] <= nums[mid]){
                low = mid + 1;
            }
            // Decreasing Slope
            else if(nums[mid] >= nums[mid+1]){
                high = mid - 1;
            }
            // Dip
            // When the Mid Pointer is at the Intersection of Two Lines i.e., the Dip
            // nums[mid-1] > nums[mid] < nums[mid+1]
            // Pointer can be moved to either of the side
            else low = mid + 1;
        }

        return -1;
    }
};

// Technique:
// BS-Binary Search (Modified for Peak Element in Array)

// Approach:
// Use binary search between indices 1 and n-2 to find a peak element (greater than neighbors).
// Handle edge cases where size is 1 or peak is at either boundary.
// At each step, check if mid element is a peak comparing neighbors.
// If mid is not peak, decide which half to search next based on neighbor comparisons.
// Return index of the peak element.

// TC: O(log N)
// SC: O(1)

// Verdict: Optimal

int main()
{
    // Main Function placeholder for testing
    return 0;
}