#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int rows = strs.size();
        int cols = strs[0].size();
        int delCnt = 0;

        for(int col = 0; col < cols; col++){

            for(int row = 0; row < rows - 1; row++){
                if(strs[row][col] > strs[row + 1][col]){
                    delCnt++;
                    break;
                }
            }
        }

        return delCnt;
    }
};

// Technique:
// Column-wise Lexicographical Validation

// Approach:
// For each column, check if any consecutive rows violate lexicographical order.
// If strs[row][col] > strs[row+1][col] for any row, delete entire column.
// Count all such violating columns.

// TC: O(Row * Column)
// SC: O(1)

// Verdict: Optimal

int main(){
    // Main Function placeholder for testing
    return 0;
}