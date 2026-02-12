#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// BRUTE FORCE
class Solution {
public:
    // Function to find indices of two numbers that add up to target
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    return {i,j}; // Return the indices when pair found
                }
            }
        }
        return {}; // Return empty if no pair matches
    }
};

// Approach: Traverse and find the indices pair

// Time Complexity: O(N^2) ==> Brute Force (2 Traversals)
// Space Complexity: O(1) ==> Constant Time

// Verdict: Brute Force

// OPTIMAL
class Solution {
public:
    // Function to find indices of two numbers that add up to target
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp; // Map to store number and its index

        for(int i=0;i<nums.size();i++){
        
            int remain = target - nums[i]; // Complement/Remain needed to reach target

            // Looking for existense of Compliment/Remain in the HashMap
            if(mpp.find(remain) != mpp.end()){
                return{mpp[remain], i}; // Return the indices in case of exsitence
            }

            // Storing of current number and index in map if Remain/Compliment not found.
            mpp[nums[i]]=i;
        }
        return{}; // Return Empty if no indices found 
    }
};

// Technique:
// Hashmap

// Approach: Traverse, look for Compliment/Remain in the HashMap
// If found return the indices, if not add the current element to HashMap

// Time Complexity: O(N) ==> Optimal with single traversal
// Space Complexity: O(N) ==> Extra space needed to store elements in map

// Verdict: Optimal

// GitHub: https://github.com/yashwanth-a-ssn
// LeetCode: https://leetcode.com/u/yashwanth-a-ssn/
// CodeForces: https://codeforces.com/profile/yashwanth-a-ssn

int main() {
    // Main Function placeholder for testing
    return 0;
}