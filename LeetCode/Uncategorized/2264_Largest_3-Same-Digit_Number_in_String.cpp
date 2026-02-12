#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestGoodInteger(string num) {
        int strSize = num.size();
        string arr[] = {"999", "888", "777", "666", "555", "444", "333", "222", "111", "000"};
        for(int i = 0; i < 10; i++){
            if(num.find(arr[i]) != string::npos) return arr[i];
        }
        return "";

    }
};

int main() {
    
    return 0;
}