#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ind = -1;
        int low = 0;
        int high = nums.size()-1;

        while(low <= high){
            int mid = (low + high) / 2;
            if(nums[mid] == target){
                ind = mid;
                return mid;
            }
            else if(nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return low;
        
    }
};

// Technique:
// BS-Binary Search (Modified Search Insert Position)

// Approach:
// Use binary search to find the target element's index in the sorted array.
// If target found, return its index immediately.
// If not found, return the low pointer which indicates the insertion position to maintain sorted order.

// TC: O(log n)
// SC: O(1)

// Verdict: Optimal

int main(){
    // Main Function placeholder for testing
    return 0;
}
