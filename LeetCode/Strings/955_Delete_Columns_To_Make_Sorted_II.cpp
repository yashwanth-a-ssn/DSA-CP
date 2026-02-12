#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs.size();
        int m = strs[0].size();
        int delCnt = 0;

        vector<bool> sorted(n - 1, false);

        for (int col = 0; col < m; col++) {
            bool deleteCol = false;

            // Check the need for deletion
            for (int row = 0; row < n - 1; row++) {
                if (!sorted[row] && strs[row][col] > strs[row + 1][col]) {
                    deleteCol = true;
                    delCnt++;
                    break;
                }
            }

            if (deleteCol) continue;
            // Updates only when the coloumn is unaltered i.e., no deletion
            // Updating the status based on the dletied or altered coloumn makes no sense and it is incorrect

            // Update the sorted pairs
            for (int row = 0; row < n - 1; row++) {
                if (!sorted[row] && strs[row][col] < strs[row + 1][col]) {
                    sorted[row] = true;
                }
            }
        }

        return delCnt;
    }
};

// Technique:
// Greedy Column Selection
// Incremental Sorting Status

// Approach:
// For each column, check if it violates lexicographical order for any unsorted row pair.
// Delete violating columns.
// For kept columns, update sorting status of row pairs that show correct order in this column.

// TC: O(Row * Column)
// SC: O(Row)

// Verdict: Optimal

int main(){
    // Main Function placeholder for testing
    return 0;
}