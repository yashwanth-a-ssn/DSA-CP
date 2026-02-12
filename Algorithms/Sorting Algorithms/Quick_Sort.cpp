#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Partition function for QuickSort
    // Rearranges the array segment arr[low..high] about a pivot
    // Returns the index where the pivot finally lies
    int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[low];   // Choose the first element as pivot
        int i = low;
        int j = high;

        // Move i right and j left, swapping elements to partition
        while(i < j){
            while(arr[i] <= pivot && i <= high - 1){
                i++;
            }
            while(arr[j] > pivot && j >= low + 1){
                j--;
            }
            // Swap out-of-place elements
            if(i < j){
                swap(arr[i], arr[j]);
            }
        }
        // Place the pivot in its correct position
        swap(arr[low], arr[j]);
        return j;
    }

    // Recursive helper function for QuickSort
    void qS(vector<int>& arr, int low, int high) {
        // Recurse only if segment has 2 or more elements
        if(low < high){
            int pIndex = partition(arr, low, high); // Partition & get pivot index
            qS(arr, low, pIndex - 1);  // Sort left subarray
            qS(arr, pIndex + 1, high); // Sort right subarray
        }
    }

    // QuickSort interface function
    vector<int> quickSort(vector<int>& arr){
        qS(arr, 0, arr.size() - 1); // Sort the entire array
        return arr;
    }
};

int main() {
    // Main Function placeholder for testing
    return 0;
}

/*
Time Complexity: O(N log N) ==> Optimal for Comparison Sorts
Space Complexity: O(1) ==> Constant Space. In-place sort (recursive stack not counted)
*/
