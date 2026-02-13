#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int func(int mid, int n, int m){
        long long ans = 1;

        for(int i = 1; i <= n; i++){
            ans *= mid;
            if (ans > m) return 2;   // mid^n > m
        }

        if(ans == m) return 1;     // mid^n == m

        return 0;                   // mid^n < m
    }

public:
    int NthRoot(int N, int M){
        int low = 1;
        int high = M;

        while(low <= high){
            int mid = low + (high - low) / 2;

            int val = func(mid, N, M);

            if(val == 1){
                return mid;
            }
            else if(val == 0){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

        return -1;
    }
};

// Technique:
// BS – Binary Search on Answer

// Approach:
// Search for the nth root in the range [1, M] using binary search.
// For a chosen mid, compute mid^N with early stopping to avoid overflow.
// If mid^N equals M, return mid.
// If mid^N is smaller than M, search the right half.
// If mid^N is greater than M, search the left half.
// If no integer nth root exists, return -1.

// TC: O(N) x O(log M) = O(N log M)
// N => Power value
// M => Search Space/Given Value
// SC: O(1)

// Verdict: Optimal


int main()
{
    // Main Function placeholder for testing
    return 0;
}