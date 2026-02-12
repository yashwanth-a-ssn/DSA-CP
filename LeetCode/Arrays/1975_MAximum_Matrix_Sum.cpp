#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0;
        int negCnt = 0;
        int minElem = INT_MAX;
        int size = matrix.size();
    

        for(int row = 0; row < size; row++){
            for(int col = 0; col < size; col++){
                sum += abs(matrix[row][col]);
                if(matrix[row][col] < 0) negCnt++;
                minElem = min(minElem, abs(matrix[row][col]));
            }
        }

        if(negCnt % 2 == 1) sum -= 2LL * minElem;

        return sum;
    }
};

// Technique:
// Greedy 
// Absolute Sum Transformation

// Approach:
// Step 1 - Traverse matrix: Accumulate sum of absolute values, count negatives, track smallest |value|.
// Step 2 - Parity Check: If negative count is even, all elements can be made non-negative.
// Step 3 - Odd Negatives: If negative count is odd, one value must stay negative, so subtract 2 * minElem from sum.
//     Multiplied by 2 because, 
//     Once to remove remove the addition in the accumulated sum 
//     Another for actual subtraction in the accumulated sum

// TC: O(N^2) = O(Rows * Cols) => Square Matrix
// SC: O(1)

// Verdict: Optimal

int main(){
    // Main Function placeholder for testing
    return 0;
}