#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int totApp = accumulate(apple.begin(), apple.end(), 0);
        sort(capacity.begin(), capacity.end(), greater<int>());

        int i = 0;

        while(totApp > 0){
            totApp -= capacity[i];
            i++;
        }

        return i;
    }
};

// Technique:
// Greedy Largest-First Assignment

// Approach:
// Calculate total apples needed. Sort boxes in descending capacity order.
// Use largest capacity boxes first until all apples can fit (greedy).

// TC: O(N log N)
// SC: O(1)

// Verdict: Optimal

int main(){
    // Main Function placeholder for testing
    return 0;
}