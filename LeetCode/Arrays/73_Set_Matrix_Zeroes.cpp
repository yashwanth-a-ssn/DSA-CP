#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Most Readable 

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size(); // No of Rows
        int m = matrix[0].size(); // No of Coloums
        int col0 = 1; // To have tracks of Zero on 0th Row

        // Finding the Rows and Coloums that should be marked Zero
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                // <=== TRICKY ===>
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0; //Marking i-th Row

                    if( j != 0){
                        matrix[0][j] = 0; //Marking j-th Row
                    }
                    else{
                        col0 = 0;
                    }
                }
            }
        }

        // Marking Zeros
        for(int i = 1; i<n; i++){
            for(int j = 1; j<m; j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }

        //Marking Zeroes on 0th Coloumn
        if(matrix[0][0] == 0){ 
            for(int j = 0; j<m; j++){
                matrix[0][j] = 0;
            }
        }
        
        //Marking Zeroes on 0th Row
        if(col0 == 0){ //Marking Zeroes on 0th Row
            for(int i = 0; i<n; i++){
                matrix[i][0] = 0;
            }
        }
    }
};

// Technique:
// In-place Marker Technique

// Approach: Traverse the matrix, using the first row and first column to mark rows and columns containing zeros.
// Use an integer flag to track whether the first column should be zeroed, avoiding overlap with the first cell marker.
// After marking, iterate again to set elements to zero based on these markers.

// TC: O(2 x N x M) ≈ O(N x M)
// SC: O(1)

// Verdict: Optimal

// GitHub: https://github.com/yashwanth-a-ssn
// LeetCode: https://leetcode.com/u/yashwanth-a-ssn/
// CodeForces: https://codeforces.com/profile/yashwanth-a-ssn

// Most Discrete Sol

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(); // No of Rows
        int n = matrix[0].size(); // No of Coloums

        bool firstRowHasZero = false, firstColHasZero = false;

        // Check if first row has zero
        for (int j = 0; j < n; j++) {
            if (matrix[0][j] == 0) {
                firstRowHasZero = true;
                break;
            }
        }

        // Check if first column has zero
        for (int i = 0; i < m; i++) {
            if (matrix[i][0] == 0) {
                firstColHasZero = true;
                break;
            }
        }

        // Use first row and column as markers
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;  // Mark row
                    matrix[0][j] = 0;  // Mark column
                }
            }
        }

        // Zero rows based on markers
        for (int i = 1; i < m; i++) {
            if (matrix[i][0] == 0) {
                for (int j = 1; j < n; j++) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Zero columns based on markers
        for (int j = 1; j < n; j++) {
            if (matrix[0][j] == 0) {
                for (int i = 1; i < m; i++) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Zero first row if needed
        if (firstRowHasZero) {
            for (int j = 0; j < n; j++) {
                matrix[0][j] = 0;
            }
        }

        // Zero first column if needed
        if (firstColHasZero) {
            for (int i = 0; i < m; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};

// Approach: Scan the first row and first column to detect any zeros and record this with boolean flags.
// Use the remaining cells in the first row and column as markers to indicate which rows and columns must be zeroed.
// Traverse the rest of the matrix and zero out cells according to these markers.
// In the end, zero the first row and column if the flags indicate they contained zeros.

// TC: O(2 x N x M) ≈ O(N x M)
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