#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int firstLargeEle = arr[0];
        int secLargeEle = -1; // return case in case of absence of second highest value
        
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] > firstLargeEle){
                secLargeEle = firstLargeEle;
                firstLargeEle = arr[i];
            }
            else if(arr[i] > secLargeEle && arr[i] != firstLargeEle){
                secLargeEle = arr[i];
            }
        }
        return secLargeEle;
    }
};

// Technique:
// Traversal

// Approach: Traverse the array once, updating the largest and second largest elements as you go.
// If the current element is greater than the largest, update both; otherwise,
// If it's greater than the second largest (and not equal to the largest), update the second largest.

// TC: O(N)
// SC: O(1)

// Verdict: Optimal

int main()
{
    // Main Function placeholder for testing
    return 0;
}