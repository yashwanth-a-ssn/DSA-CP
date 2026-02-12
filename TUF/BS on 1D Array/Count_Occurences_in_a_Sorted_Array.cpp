#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countOccurrences(const vector<int>& arr, int target) {
        int first = -1, last = -1;
        int low = 0, high = arr.size() - 1;

        // First Occurence
        while(low <= high){
            int mid = low + (high - low) / 2;

            if(arr[mid] == target){
                first = mid;
                high = mid - 1;
            }
            else if(arr[mid] < target){
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        if(first == -1) return 0;

        low = 0;
        high = arr.size() - 1;

        // Second occurence
        while(low <= high){
            int mid = low + (high - low) / 2;

            if(arr[mid] == target){
                last = mid;
                low = mid + 1;
            }
            else if(arr[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

        return last - first + 1;
    }
};

// Technique:
// BS – Binary Search (First & Last Occurrence)

// Approach:
// Use binary search to find the first occurrence of the target
// by moving left after a match.
// Use binary search again to find the last occurrence of the target
// by moving right after a match.
// The number of occurrences is computed as (last − first + 1).

// TC: O(log N) x O(2) = O(log N)
// N => Number of elements in the array
// SC: O(1)

// Verdict: Optimal

int main()
{
    // Main Function placeholder for testing
    return 0;
}