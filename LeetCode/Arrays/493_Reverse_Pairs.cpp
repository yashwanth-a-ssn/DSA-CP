#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums, int low, int mid, int high){
        vector<int> temp; // Temporary array to hold sorted elements
        int left = low;   // Starting index of left subarray
        int right = mid + 1; // Starting index of right subarray

        // Merge elements from both subarrays in sorted order
        while(left <= mid && right <= high){
            if(nums[left] <= nums[right]){
                temp.push_back(nums[left]);
                left++;
            }
            else{
                temp.push_back(nums[right]);
                right++;
            }
        }
      
        // Copy any remaining elements from the left subarray
        while(left <= mid){
            temp.push_back(nums[left]);
            left++;
        }
      
        // Copy any remaining elements from the right subarray
        while(right <= high){
            temp.push_back(nums[right]);
            right++;
        }
      
        // Copy the sorted elements back into original array segment
        for(int i = low; i <= high; i++){
            nums[i] = temp[i - low];
        }
    }
    
    // Function that counts the Number of Pairs
    int countPairs(vector<int>& nums, int low, int mid, int high){
        int cnt = 0;
        int right = mid + 1;
        for(int i = low; i<=mid; i++){
            while(right <= high && nums[i] > 2LL * (long long)nums[right]) right++; // Using 64-Bit Space to aovid overflow
            // Advancing the Right Pointer, since Merging
            cnt += (right - (mid+1));
        }
        return cnt;
    }

    // Main recursive merge sort function to sort arr[low..high]
    int mS(vector<int>& nums, int low, int high){
        int cnt = 0;
        if(low >= high) return cnt; // Base case: segment has 1 or 0 elements
        int mid = (low + high) / 2;

        cnt += mS(nums, low, mid);      // Sort left half recursively
        cnt += mS(nums, mid + 1, high); // Sort right half recursively
        cnt += countPairs(nums, low, mid, high);
        merge(nums, low, mid, high); // Merge the two sorted halves

        return cnt;
    }

    int reversePairs(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();    
        cnt += mS(nums, 0, n - 1);
        return cnt;
    }
};

// Algorithm: Uses the Merge Sort Algorithm to count reverse pairs and sort the array.

// Approach:
// Recursively divide the array into two halves.
// Count "reverse pairs" where nums[i] > 2 * nums[j] using two pointers in the merged array portion.
// Merge the two halves using a temporary array to maintain sorted order.
// Return the total count of such pairs throughout the recursion.

// TC: O(N log N) — Merging and counting pairs takes linear time per level, and there are log N levels.
// SC: O(N) — Temporary vector is used for merging.

// Verdict: Optimal

// GitHub: https://github.com/yashwanth-a-ssn
// LeetCode: https://leetcode.com/u/yashwanth-a-ssn/
// CodeForces: https://codeforces.com/profile/yashwanth-a-ssn

int main()
{
    // Main Function placeholder for testing
    return 0;
}