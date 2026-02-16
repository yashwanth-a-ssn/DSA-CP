#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{
private:
    void func(int idx, int sum, vector<int>& nums, int size, vector<int>& sumSubSet){
        if(idx == size){
            sumSubSet.push_back(sum);
            return;
        }

        func(idx+1, sum + nums[idx], nums, nums.size(), sumSubSet);

        func(idx+1, sum, nums, nums.size(), sumSubSet);        
    }

public:
    vector<int> subsetSums(vector<int>& nums){
        vector<int> sumSubSet;
        func(0, 0, nums, nums.size(), sumSubSet);
        sort(sumSubSet.begin(), sumSubSet.end());

        return sumSubSet;
    }
};

// Technique:
// Recursion (Pick / Not Pick)

// Approach:
// Use recursion to generate all subset sums.
// At each index, either include the current element
// in the running sum or exclude it.
// When the index reaches the end, store the computed sum.
// Finally, sort all subset sums before returning.

// TC: O(2^N) + O(2^N log(2^N)) = O(2^N log(2^N))
// N => Number of elements
// 2^N => Total subsets generated
// SC: O(2^N)
// 2^N => Storage for all subset sums (recursion stack O(N))

// Verdict: Optimal


int main()
{
    // Main Function placeholder for testing
    return 0;
}