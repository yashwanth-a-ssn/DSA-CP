#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int largest(vector<int> &arr) {
        int largestElement = 0;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > largestElement){
                largestElement = arr[i];
            }
        }
        return largestElement;
    }
};

// Technique:
// Traversal

// Approach: Just travserse the array and store the largest element in a variable and return it after the traversal.

// TC: O(N) 
// SC: O(1) 

// Verdict: Optimal

// GitHub: https://github.com/yashwanth-a-ssn
// LeetCode: https://leetcode.com/u/yashwanth-a-ssn/
// CodeForces: https://codeforces.com/profile/yashwanth-a-ssn

int main()
{
    // Main Function placeholder for testing
    return 0;
}