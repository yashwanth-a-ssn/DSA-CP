#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    
    // Function to merge two sorted halves arr[low..mid] and arr[mid+1..high]
    void merge(vector<int>& arr, int low, int mid, int high){
        vector<int> temp; // Temporary array to hold sorted elements
        int left = low;   // Starting index of left subarray
        int right = mid + 1; // Starting index of right subarray

        // Merge elements from both subarrays in sorted order
        while(left <= mid && right <= high){
            if(arr[left] <= arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
            }
        }
      
        // Copy any remaining elements from the left subarray
        while(left <= mid){
            temp.push_back(arr[left]);
            left++;
        }
      
        // Copy any remaining elements from the right subarray
        while(right <= high){
            temp.push_back(arr[right]);
            right++;
        }
      
        // Copy the sorted elements back into original array segment
        for(int i = low; i <= high; i++){
            arr[i] = temp[i - low];
        }
    }
    
    // Main recursive merge sort function to sort arr[low..high]
    void mS(vector<int>& arr, int low, int high){
        if(low >= high) return; // Base case: segment has 1 or 0 elements
        int mid = (low + high) / 2;

        mS(arr, low, mid);      // Sort left half recursively
        mS(arr, mid + 1, high); // Sort right half recursively
        merge(arr, low, mid, high); // Merge the two sorted halves
    }
    
    // Public interface to start merge sort on entire array
    void mergeSort(vector<int>& arr, int l, int r) {
        int n = arr.size();    
        mS(arr, 0, n - 1);    // Kick off recursive sorting
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