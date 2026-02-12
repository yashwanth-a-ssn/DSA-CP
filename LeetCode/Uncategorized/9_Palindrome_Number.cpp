#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int revNum = 0;
        int digit = 0;
        int tempNo = x;
        while(tempNo!=0){
            digit = tempNo%10;
            if((revNum > INT_MAX/10) || (revNum == INT_MAX/10 && digit > 7)) return 0;
            if((revNum < INT_MIN/10) || (revNum == INT_MIN/10 && digit < -8)) return 0;
            revNum = (revNum * 10) + digit;
            tempNo/=10;
        }
        if(x == revNum) return true;
        else return false;
    }
};

int main() {
    // Main Function placeholder for testing
    return 0;
}