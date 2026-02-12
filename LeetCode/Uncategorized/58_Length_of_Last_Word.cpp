#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int strSize = s.size() - 1; //To avoid Out of bound err, since 0 based indexing.
        while(strSize >=0 && s[strSize] == ' '){
            strSize--;
        }
        int count = 0;

        while(strSize >=0 && s[strSize] != ' '){
            count+=1;
            strSize--;
        }

        return count;
    }
};

int main() {
    
    return 0;
}