#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class MountainArray {
public: // Placeholder
    int get(int index);
    int length();
};

/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int size = mountainArr.length();

        int low = 0;
        int high = size - 1;

        int peak = findPeak(mountainArr, low, high);
        if(peak == -1) return -1;

        int leftSearch = binarySearch(mountainArr, 0, peak, target, true);
        if (leftSearch != -1) return leftSearch;

        return binarySearch(mountainArr, peak, high, target, false);
    }

    int findPeak(MountainArray &arr, int low, int high) {
        while (low < high) {  // ==========> Condition is < not <= 
            int mid = (low + high) / 2;

            // Check if NEXT element exists before accessing
            if (mid + 1 < arr.length() && arr.get(mid) < arr.get(mid + 1)) {
                low = mid + 1;  // Peak is in right half (still ascending)
            }
            else {
                high = mid;     // Peak is at mid or left half
            }
        }
    return low;  // low == high == peak
    }

    int binarySearch(MountainArray &arr, int low, int high, int target, bool ascending){
        while(low <= high){
            int mid = (low + high) / 2;
            int midVal = arr.get(mid);

            if(midVal == target) return mid;

            if(ascending){
                if(midVal < target) low = mid + 1;
                else high = mid - 1;
            }
            else{
                if(midVal > target) low = mid + 1;
                else high = mid - 1;
            }
        }

        return -1;
    }
};

// Technique:
// 3-Step Binary Search (Peak + Left Ascending + Right Descending)

// Approach:
// 1. Find peak index using binary search on mountain structure.
// 2. Search left side [0, peak] with ascending binary search.
// 3. Search right side [peak, n-1] with descending binary search.

// TC: O(Log N × 3) = O(Log N)
// SC: O(1)

// Verdict: Optimal

int main(){
    // Main Function placeholder for testing
    return 0;
}