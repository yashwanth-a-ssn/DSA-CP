#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        int minPenalty = INT_MAX;
        int bestHour = 0;
        vector<int> prefixY(n + 1, 0);  // prefixY[i] = # Y's in [0,i-1]
        
        // Build prefix sum of Y's
        for (int i = 0; i < n; i++) {
            prefixY[i + 1] = prefixY[i] + (customers[i] == 'Y');
            // Storing at i+1 since prefix
        }
        
        for (int hour = 0; hour <= n; hour++){
            
            int nBefore = hour - prefixY[hour];          
            int yAfter = prefixY[n] - prefixY[hour];      
            int penalty = nBefore + yAfter;
            
            if (penalty < minPenalty) {
                minPenalty = penalty;
                bestHour = hour;
            }
        }

        return bestHour;
    }
};

// Technique:
// Prefix Sum (Counting 'Y's)
// Brute-Force Penalty Evaluation

// Approach:
// Build prefix array of 'Y' counts to quickly calculate:
// - 'N's before closing = hour - prefixY[hour]
// - 'Y's after closing = prefixY[n] - prefixY[hour]
// Try closing at each possible hour and select the earliest one with minimum penalty.

// TC: O(N)
// SC: O(N)

// Verdict: Optimal



// Brute-Force
class Solution {
public:
    int bestClosingTime(string customers) {
        int hrs = customers.size();
        int curPenality;
        int minPenality = INT_MAX;
        int minHr = 0;
        int hr;

        for(int i = 0; i <= hrs; i++){
            hr = 0;
            curPenality = 0;

            while(hr < i){
                if(customers[hr] == 'N'){
                    curPenality++;
                }
                hr++;
            }

            while(hr < hrs){
                if(customers[hr] == 'Y'){
                    curPenality++;
                }
                hr++;
            }

            if(curPenality < minPenality){
                minPenality = curPenality;
                minHr = i;
            }
        }

        return minHr;
    }
};

int main(){
    // Main Function placeholder for testing
    return 0;
}