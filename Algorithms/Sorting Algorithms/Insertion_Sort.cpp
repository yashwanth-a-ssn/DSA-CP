#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Insertio Sort Function
    void insertionSort(vector<int>& arr) {
        
        int size = arr.size();
        
        // Traversal
        for(int i = 1; i<=size-1; i++){
            int j = i;
            
            // Swapping it backward until it is in correct position
            while(j>0 && arr[j-1] > arr[j]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                j--;
            }
        }
    }
};

// Time Complexity: O(N^2)
// Space Complexity: O(1)

int main() {
    // Main Function placeholder for testing
    return 0;
}