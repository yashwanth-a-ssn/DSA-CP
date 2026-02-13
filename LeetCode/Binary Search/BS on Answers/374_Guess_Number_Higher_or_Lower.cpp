#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guess(int num){

        // Placeholder
        return 0;
    }

    int guessNumber(int n) {
        int low = 1;
        int high = n;
        int mid;

        while(low <= high){
            mid = low + (high - low) / 2;

            int pick = guess(mid);

            if(pick == 0) return mid;
            else if(pick == -1)  high = mid - 1;
            else low = mid + 1;
        }

        return mid;
    }
};

// Technique:
// BS - Binary Search on Answers

// Approach:
// Maintain a search range [low, high] over possible picked numbers [1..n].
// Repeatedly guess mid = low + (high - low) / 2.
// Use the feedback API:
// - guess(mid) == 0 → found the number, return mid.
// - guess(mid) == -1 → mid is higher than picked, move left: high = mid - 1.
// - guess(mid) == 1 → mid is lower than picked, move right: low = mid + 1.

// TC: O(log N) 
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