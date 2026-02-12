#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
// User Defined Functions
private:
    void recurPermute(vector<int> &ds, vector<int> &nums, vector<vector<int>> &ans, vector<int> &freq){
        if(ds.size() == nums.size()){
            ans.push_back(ds);
            return;
        }

        for(int i = 0; i < nums.size(); i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i] = 1;
                recurPermute(ds, nums, ans, freq);
                freq[i] = 0;
                ds.pop_back();
            }
        }
    }

// Given Function in LC
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        vector<int> freq(nums.size(), 0);
        recurPermute(ds, nums, ans, freq);
        return ans;
    }
};

// Approach: Use backtracking to generate all permutations by
// recursively building sequences and tracking used elements with a frequency vector.

// TC: O(N * N!) => There are N! permutations and each takes O(N) time to build.
// SC: O(N) =>  Extra space for recursion stack and frequency vector.

// Verdict: Optimal

// GitHub: https://github.com/yashwanth-a-ssn
// LeetCode: https://leetcode.com/u/yashwanth-a-ssn/
// CodeForces: https://codeforces.com/profile/yashwanth-a-ssn