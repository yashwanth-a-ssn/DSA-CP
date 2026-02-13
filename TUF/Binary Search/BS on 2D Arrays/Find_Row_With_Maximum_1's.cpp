#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Better Sol with BS-Binary Search
class Solution {
 public:    
    int findNoOfOnes(vector<int> mat){
        int low = 0;
        int high = mat.size() - 1;
        int firstOneIndex = mat.size();

        while(low <= high){
            int mid = (low + high) / 2;

            if(mat[mid] == 1){
                firstOneIndex = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }

        return firstOneIndex;
    }

    int rowWithMax1s(vector<vector<int>> &mat){
        int rows = mat.size();
        int firstOneIndexOverall = mat[0].size();
        int ansRow = -1;

        for(int i = 0; i < rows; i++){
            int firstOneIndex = findNoOfOnes(mat[i]);

            if(firstOneIndex < firstOneIndexOverall){
                firstOneIndexOverall = firstOneIndex;
                ansRow = i;
            }
        }

        return ansRow;
    }
};

// Technique:
// BS - Binary Search

// Approach:
// For each row, use binary search to find first 1's position (earliest column index)
// Row with smallest first-1 index has maximum leading 1s
// Track minimum column index found across all rows

// TC: O(rows * log(cols))
// SC: O(1)

// Verdict: Better

// GitHub: https://github.com/yashwanth-a-ssn
// LeetCode: https://leetcode.com/u/yashwanth-a-ssn/
// CodeForces: https://codeforces.com/profile/yashwanth-a-ssn



// Optimal Sol using Staircase Binary Search
class Solution {
  public:   
  int rowWithMax1s(vector < vector < int >> & mat) {
    int totalRows = mat.size();
    int row = 0;
    int col = mat[0].size() - 1;
    int ansRow = -1;

    while(row < totalRows && col >= 0){
        if(mat[row][col] == 1){
            ansRow = row;
            col--;
        }
        else row++;
    }

    return ansRow;
  }
};

// Technique: 
// BS - Staircase Binary Search (Modified Binary Search)

// Approach:
// Start from top-right corner of matrix
// - If 1 found: move left (more 1s possible in same row)
// - If 0 found: move down (need higher row for 1s)
// First row where we find 1s has maximum leading 1s

// TC: O(rows + cols)
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