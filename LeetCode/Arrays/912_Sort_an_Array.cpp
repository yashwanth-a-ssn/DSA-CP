#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums, int low, int mid, int high, vector<int>& temp){
        int left = low;
        int right = mid + 1;
        int idx = low; // Index for temp array
        
        // Merge elements from both subarrays in sorted order
        while(left <= mid && right <= high){
            if(nums[left] <= nums[right]){
                temp[idx++] = nums[left++];
            }
            else{
                temp[idx++] = nums[right++];
            }
        }
        
        // Copy remaining elements from left subarray
        while(left <= mid){
            temp[idx++] = nums[left++];
        }
        
        // Copy remaining elements from right subarray
        while(right <= high){
            temp[idx++] = nums[right++];
        }
        
        // Copy sorted elements back to original array
        for(int i = low; i <= high; i++){
            nums[i] = temp[i];
        }
    }
    
    void mS(vector<int>& nums, int low, int high, vector<int>& temp){
        if(low >= high) return; // Base case
        int mid = low + (high - low) / 2; // Avoid overflow
        
        mS(nums, low, mid, temp);           // Sort left half
        mS(nums, mid + 1, high, temp);      // Sort right half
        merge(nums, low, mid, high, temp);  // Merge sorted halves
    }
    
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp(n); // Pre-allocate temp array once
        mS(nums, 0, n - 1, temp);
        return nums;
    }
};

// Technique:
// Merge Sort - Divide and Conquer algorithm with in-place optimization

// Approach:
// Recursively divide the array into two halves until subarrays have only one or zero elements.
// Merge two sorted halves in sorted order by comparing and assigning elements into a temporary vector.
// Copy merged result back into the original array segment.
// The recursion ensures the entire array is sorted by merging step-by-step from smaller segments.

// mergeSort(nums):
// Public interface that kicks off merge sort on the entire nums array with pre-allocated temp space.

// TC: O(N log N)
// => Recursive division (log n levels)
// => Linear merging at each level (n work per level)
// SC: O(N) => Temporary vector used during merging, pre-allocated once for efficiency

// Verdict: Optimal

// GitHub: https://github.com/yashwanth-a-ssn
// LeetCode: https://leetcode.com/u/yashwanth-a-ssn/
// CodeForces: https://codeforces.com/profile/yashwanth-a-ssn

int main()
{
    // Main Function placeholder for testing
    return 0;
}