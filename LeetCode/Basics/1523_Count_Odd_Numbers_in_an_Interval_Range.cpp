#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countOdds(int low, int high) {
        if(low % 2 == 0) low++;
        if(high % 2  == 0) high--;

        return ((high - low) / 2) + 1;
    }
};

// Technique:
// Arithmetic Progression (Odd Numbers Counting)

// Approach:
// 1. Adjust bounds to first/last odd numbers in range:
//    - If low is even → low = low + 1 (next odd)
//    - If high is even → high = high - 1 (previous odd)
// 2. After adjustment, [low, high] contains ONLY odd numbers
// 3. Odds form AP: low, low+2, low+4, ..., high
//    Number of terms = ((high - low) / 2) + 1

// TC: O(1)
// SC: O(1)

// Verdict: Optimal

int main(){
    // Main Function placeholder for testing
    return 0;
}