#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Selection Sort Interface Function
    void selectionSort(vector<int> &arr) {
        
        int size = arr.size();
        int temp;
        int min; // Variable to store latest Index of Min Value

        // Iterate over each position except the last one
        for(int i = 0; i <= size-2; i++){
            min = i; 
            // Traverse the unsorted portion to find the actual minimum element
            for(int j = i; j<=size-1; j++){
                if(arr[j] < arr[min]){
                    min = j; // Updating Min Values' Index
                }
                
            }
            // Swap the found minimum element with the element at position i
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
};


// Time Complexity: O(N^2)
// Space Complexity: O(1)


int main() {
    // Main Function placeholder for testing
    return 0;
}