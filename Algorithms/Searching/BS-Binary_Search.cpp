#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;

        while(low <= high){
            int mid = (low + high) / 2;

            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                low = mid + 1;
            }
            else{
             high = mid - 1;
            }
        }

        return -1;
    }
};

// Technique:
// BS - Binary Search(Classical)

// Approach:
// Calculate mid and compare with target, return index if target found.
// If nums[mid] < target, eliminate the left part and search on right part.
// If nums[mid] > target,, eliminate the right part and search om left part.
// Return -1 if target not present.

// TC: O(log n)
// SC: O(1)

// Verdict: Optimal

int main()
{
    // Main Function placeholder for testing
    return 0;
}