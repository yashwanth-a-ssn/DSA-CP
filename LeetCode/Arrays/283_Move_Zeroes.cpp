#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to Move Zeroes to the end of the Array
    void moveZeroes(vector<int>& nums) {
        int prevZero = -1; //Poiter to point previous Zero
        int n = nums.size();
    
        // Find the first occurance of Zero
        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                prevZero = i;
                break;
            }
        }

        // Edge Case, return in case of absence of zeros in the Array
        if(prevZero == -1) return;

        // Swap the position of Zero and Non-Zero Element
        for(int i = prevZero+1; i < n; i++){
            if(nums[i] != 0){
                swap(nums[i], nums[prevZero]);
                prevZero++;
            }
        }
        return;
    }
};

// Technique:
// Two-Pointer Approach (In-Place Partitioning)
// Approach: Find the first occurence of Zero in the Array. Swap this Zero with Non-Zero Element in the upcoming indicies of the Array

// TC: O(N) ==> O(X) + O(N-X) ≈ O(N) ==> Linear Time
// SC: O(1) ==> In-place Swapping

// Verdict: Optimal

// GitHub: https://github.com/yashwanth-a-ssn
// LeetCode: https://leetcode.com/u/yashwanth-a-ssn/
// CodeForces: https://codeforces.com/profile/yashwanth-a-ssn

int main()
{
    // Main Function placeholder for testing
    return 0;
}