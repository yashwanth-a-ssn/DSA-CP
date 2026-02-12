#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        int freq[26] = {0};
        for (char c : s) freq[c - 'a']++;
        for (char c : t) freq[c - 'a']--;
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) return false;
        }
        return true;
    }
};
// Technique:
// Frequency Counting

// Approach:
// If the strings are different lengths, return false.
// Create a Array of Size 26 and Intialize it to Zero.
// Count each character in the first string, subtract for the second.
// If all counts are zero, the strings are anagrams.

// TC: O(N) 
// SC: O(1)

// Verdict: Optimal

// GitHub: https://github.com/yashwanth-a-ssn
// LeetCode: https://leetcode.com/u/yashwanth-a-ssn/
// CodeForces: https://codeforces.com/profile/yashwanth-a-ssn

int main()
{
    // Main Function placeholder for testing
    return 0;
}