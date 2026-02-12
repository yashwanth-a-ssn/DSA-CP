#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        
        auto it = upper_bound(arr.begin(), arr.end(), x);
        if (it == arr.begin())
            return -1; 
            
        return (it - arr.begin()) - 1;
        
    }
};

// Floor:
// Floor of a target in a sorted array is the largest element that is smaller than or equal to the target.
// It represents the closest value less than or equal to the target in sorted order.

// Technique:
// Binary Search (Using STL Upper Bound)

// Approach:
// Use C++ STL upper_bound to find the iterator pointing to the first element strictly greater than the target.
// If the iterator is at the beginning, it means no floor element exists, so return -1.
// Otherwise, the floor is the element just before this iterator, so return its index.

// TC: O(log n) due to binary search in upper_bound
// SC: O(1)

// Verdict: Optimal

int main()
{
    // Main Function placeholder for testing
    return 0;
}