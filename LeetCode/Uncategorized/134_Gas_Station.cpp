#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total = 0, current = 0, start = 0; // Initializing
        int n = gas.size(); // Getting Size

        for (int i = 0; i < n; i++) {
            total += gas[i] - cost[i]; // To be checked after complete iteration
            current += gas[i] - cost[i]; // to be checked after each iteration

            if (current < 0) {
                current = 0; // Resetting to  0, if the starting index fails i.e., currentGas falls below 0
                start = i + 1; // Incresing the index value for return
            }
        }
        return (total < 0) ? -1 : start;
    }
};


int main() {
    
    return 0;
}