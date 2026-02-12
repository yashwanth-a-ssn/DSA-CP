#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Bool Function to Palindrome
    bool isPalindrome(string s) {
        string newStr1;
        int iniSize = s.size();

        // Adding AlphaNum Terms into a new string
        for(int i = 0; i < iniSize; i++){
            if (isalnum(s[i])){
                newStr1+=tolower(s[i]);
            }
        }

        // Checking whthere it is a Palindrome
        int newStrSize = newStr1.size();
        for(int j = 0; j<newStrSize/2; j++){ // j<newStrSize/2 ==> Optimal traversal without reduntant checking
            if(newStr1[j] != newStr1[newStrSize-j-1]) return false;
        }
        return true;
    }
};

// Approach: First copy AlphaNumberic elements of given string into a new string.
// Then, traverse it using a for loop with 2 pointer approach and check the palindrome condition. 

// TC: O(N) ==> Linear Time 
// SC: O(N) ==> Linear Space
// Verdict: Optimal Sol

int main() {
    // Main Function placeholder for testing
    return 0;
}