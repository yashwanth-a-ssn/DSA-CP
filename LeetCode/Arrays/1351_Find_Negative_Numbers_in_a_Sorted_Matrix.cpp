#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int cnt = 0;
        int rows = grid.size();
        int cols = grid[0].size();

        int row = 0;
        int col = cols - 1;

        while(row < rows && col >= 0){
            if(grid[row][col] < 0){
                cnt += (rows - row);
                col--;
            }
            else row++;
        }

        return cnt;
    }
};

// Technique:
// Staircase Traversal (Top-Right Corner)

// Approach:
// 1. Start from top-right corner (row=0, col=last)
// 2. If negative: entire column below is negative → count + move left
// 3. If positive: move down (this row has no negatives left)

// TC: O(Rows + Cols)
// SC: O(1)

// Verdict: Optimal

int main(){
    // Main Function placeholder for testing
    return 0;
}