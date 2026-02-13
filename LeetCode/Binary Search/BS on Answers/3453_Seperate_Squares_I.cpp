#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    double calcAreaBelow(vector<vector<int>>& squares, double y) {
        double area = 0;
        for(auto& sq : squares) {
            int yi = sq[1], li = sq[2];
            if(y <= yi) continue;
            if(y >= yi + li) area += 1.0 * li * li;
            else area += li * (y - yi);
        }

        return area;
    }

public:
    double separateSquares(vector<vector<int>>& squares) {
        long long totalArea = 0.0;
        int maxY = INT_MAX;

        for(auto &sq : squares){
            int y1 = sq[1];
            int l1 = sq[2];
            totalArea += 1LL * l1 * l1;
            maxY = max(maxY, y1 + l1);
        }

        double low = 0;
        double high = maxY;
        double target = totalArea / 2.0; 

        while(high - low > 1e-5){
            double mid = (high + low) / 2.0;
            double trunCatedArea = calcAreaBelow(squares, mid);

            if(trunCatedArea < target) low = mid;
            else high = mid; 
        }

        return low;
    }
};

// Technique:
// BS - Binary Search on Answer
// Sweep Line

// Approach:
// Step 1 - Calculate total area and max Y coordinate for search bounds
// Step 2 - Binary search on y-coordinate: area_below(y) vs total/2
// Step 3 - For each mid y: Calculate truncated area below line using sweep line
// Step 4 - Adjust bounds based on whether area_below(mid) < target

// TC: O(N × log(MAX_Y))
// SC: O(1)

// Verdict: Optimal

int main(){
    // Main Function placeholder for testing
    return 0;
}