#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    vector<int> addOne(vector<int>& digits, int idx, int carry){
        if((digits[idx] + carry) < 10){
            digits[idx] += 1;

            return digits;
        }
        else if((digits[idx] + carry) > 9 && idx == 0){
            digits[idx] = 0;
            digits.insert(digits.begin(), 1);

            return digits;
        }
        else{
            digits[idx] = 0;

            return addOne(digits, idx-1, carry);
        }

        return digits;
    }
    
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        int carry = 1;

        return addOne(digits, size-1, carry);
    }
};

// Technique:
// Recursive Digit Addition

// Approach:
// Step 1 - Start from last index with carry=1 and try to add
// Step 2 - If sum < 10, increment digit and return result
// Step 3 - If sum >= 10 and at idx=0, set to 0 and insert 1 at the beginning
// Step 4 - Otherwise set current digit to 0 and recurse to previous index

// TC: O(N)
// SC: O(N) => Recursion Stack

// Verdict: Optimal

int main(){
    // Main Function placeholder for testing
    return 0;
}