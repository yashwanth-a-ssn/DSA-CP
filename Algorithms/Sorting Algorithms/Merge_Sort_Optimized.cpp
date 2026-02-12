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
    
    void mergeSort(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp(n); // Pre-allocate temp array once
        mS(nums, 0, n - 1, temp);
    }
};

int main()
{
    // Main Function placeholder for testing
    return 0;
}

/*
Time Complexity: O(N log N) ==> Optimal for comparison-based sorting
Space Complexity: O(N) ==> Auxilliary space needed for temporary arrays during merge
*/