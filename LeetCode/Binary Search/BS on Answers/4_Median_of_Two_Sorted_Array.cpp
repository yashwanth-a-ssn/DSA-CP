#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
        int n1 = nums1.size();
        int n2 = nums2.size();

        if(n2 < n1) return findMedianSortedArrays(nums2, nums1);

        int low = 0;
        int high = n1; // Size of Smallest Array

        while (low <= high){
            int mid = low + (high - low) / 2;

            // cut => No of Elemnts from that Array
            int cut1 = mid;
            int cut2 = ((n1 + n2 + 1) / 2) - cut1; // Floor Division

            int l1 = (cut1 == 0) ? INT_MIN : nums1[cut1 - 1]; // (cut1 == 0) => Zero Elements from nums1
            int l2 = (cut2 == 0) ? INT_MIN : nums2[cut2 - 1]; // (cut2 == 0) => Zero Elements from nums2
            int r1 = (cut1 == n1) ? INT_MAX : nums1[cut1]; // All the Elements of nums1 is in Left Side
            int r2 = (cut2 == n2) ? INT_MAX : nums2[cut2]; // All the Elements of nums2 is in Left Side

            if(l1 <= r2 && l2 <= r1){
                if((n1 + n2) % 2 == 0){
                    return (max(l1, l2) + min(r1, r2)) / 2.0;
                }
                else return max(l1, l2);
            }

            else if(l1 > r2) high = mid - 1;
            else low = mid + 1;
        }

        return 0.0;
    }
};

// Technique:
// BS – Binary Search on Partition

// Approach:
// Always perform binary search on the smaller array.
// Partition both arrays such that the total elements on the left
// side equals half of the combined length.
// Ensure the partition is valid by checking left-max ≤ right-min
// across both arrays.
// Once a valid partition is found, compute the median based on
// total length being even or odd.

// TC: O(log N)
// N => Size of the smaller array
// SC: O(1)

// Verdict: Optimal

/*

=====> Visual Representation <======

Test Case
nums1 = {1,3,4,7,10,12};
nums2 = {2,3,6,15};

cut1 = 3
cut2 = 2 => ((6 + 4) / 2) - cut1

Visual Representation

Left Side | Right Side
  1, 3, 4 | 7, 10, 12
     2, 3 | 6, 15

l1 = 4
l2 = 3 
r1 = 7
r2 = 6

(max(l1, l2) + min(r1, r2)) / 2.0 => (4+6) / 2 = 5;
*/ 

int main(){
    // Main Function placeholder for testing
    return 0;
}
