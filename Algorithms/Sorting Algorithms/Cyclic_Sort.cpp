#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void cycleSort(vector<int>& arr) {
    int n = arr.size();
    
    for (int cycle_start = 0; cycle_start <= n - 2; cycle_start++) {
        int item = arr[cycle_start];
        
        // Find position to place 'item'
        int pos = cycle_start;
        for (int i = cycle_start + 1; i < n; i++)
            if (arr[i] < item)
                pos++;
                
        // If item is already in correct position
        if (pos == cycle_start) continue;
        
        // Ignore all duplicate elements
        while (item == arr[pos])
            pos += 1;
            
        // put the item to it's right position
        if (item != arr[pos]) {
            swap(item, arr[pos]);
        }
        
        // Rotate rest of the cycle - resolve displaced chain
        while (pos != cycle_start) {
            pos = cycle_start;
            for (int i = cycle_start + 1; i < n; i++)
                if (arr[i] < item) pos += 1;
                
            while (item == arr[pos])
                pos += 1;
                
            if (item != arr[pos]) {
                swap(item, arr[pos]);
            }
        }
    }
}

// Technique:
// Cycle Sort (Original In-place Comparison Sort)

// Approach:
// 1. For each cycle_start, find correct position 'pos' by counting smaller elements
// 2. Swap item to pos (first write of cycle)
// 3. Rotate rest of cycle: displaced item becomes new 'item', repeat until cycle_start
// 4. Handles duplicates by skipping occupied positions
// Goal: Minimize WRITE operations (theoretical minimum ~n writes)

// TC:
// O(N²) => Comparisons
// O(N) => Writes
// SC: O(1) - purely in-place

// Verdict: 
// Theoretically optimal writes, practical for small n or LC 41 variant

// GitHub: https://github.com/yashwanth-a-ssn
// LeetCode: https://leetcode.com/u/yashwanth-a-ssn/
// CodeForces: https://codeforces.com/profile/yashwanth-a-ssn

int main()
{
    // Main Function placeholder for testing
    return 0;
}