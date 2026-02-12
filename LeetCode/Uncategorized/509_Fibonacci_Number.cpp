#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;

        int prev2 = 0, prev1 = 1;
        int curr;
        for(int i = 2; i<=n; i++){
            curr =  prev1 +  prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        return curr;
    }
};

int main() {
    
    return 0;
}