#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());

        int boatCnt = 0;
        int low = 0;
        int high = people.size() - 1;

        while(low <= high){
            boatCnt++;
            
            if (low == high) break;
            
            if (people[low] + people[high] <= limit) {
                low++;
            }
            high--;
        }

        return boatCnt;
    }
};

// Technique:
// Sorting
// Two-Pointers

// Approach:
// 1. Sort people by weight.
// 2. Use two pointers: 'low' at the lightest, 'high' at the heaviest.
// 3. If the lightest + heaviest fit into one boat, move both pointers inward.
// 4. Otherwise, the heaviest goes alone (move 'high' inward).
// 5. Count boats used each iteration until all are saved.

// TC: O(N log N)
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