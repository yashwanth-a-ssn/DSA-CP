#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        if(rows == 0 || cols == 0) return false;

        int low = 0;
        int high = (rows * cols) - 1;

        while(low <= high){
            int mid = (low + high) / 2;
            // Flattening 2D Matrix to 1D Matrix
            int rowNo = mid / cols;
            int colNo = mid % cols;

            if(matrix[rowNo][colNo] == target) return true;
            else if(matrix[rowNo][colNo] > target) high = mid - 1;
            else low = mid + 1;
        }

        return false;
    }
};

// Technique: 
// BS - Binary Search on Flattened 2D Matrix(i.e., 1D Matrix)

// Approach:
// Treat sorted matrix as virtual 1D array of size (rows * cols)
// Map 1D index to 2D coordinates: 
// rowNo = 1Dindex / cols
// colNo = 1Dindex % cols
// Standard binary search on flattened space

// TC: O(log(Rows * Cols))
// SC: O(1)

// Verdict: Optimal
int main()
{
    // Main Function placeholder for testing
    return 0;
}