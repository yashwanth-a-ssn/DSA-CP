#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        unordered_map<int,int> mpp;
        for(int i = 0; i < numbers.size(); i++){
            int remain = target - numbers[i];

            if(mpp.find(remain) != mpp.end()){
                return{mpp[remain]+1, i+1}; // 1 - Based Indexing
            }

            mpp[numbers[i]] = i; 
        }

        return{};
    }
};

// Technique:
// Hashing (Hashmap)

// Approach:
// Traverse the array once, for each number calculate complement (target - number).
// Check if complement exists in hash map; if yes, return the pair of indices.
// Otherwise, store number with its index in the map and continue.
// Stops immediately upon finding the valid pair as per problem constraints.

// TC: O(N)
// SC: O(N)

// Verdict: Optimal

// GitHub: https://github.com/yashwanth-a-ssn
// LeetCode: https://leetcode.com/u/yashwanth-a-ssn/
// CodeForces: https://codeforces.com/profile/yashwanth-a-ssn

int main()
{
    // Main Function placeholder for testing
    return 0;
}