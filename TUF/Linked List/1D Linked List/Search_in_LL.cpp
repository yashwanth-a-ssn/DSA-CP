#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
public:
    int val;
    ListNode *next;

    // Constructors
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool searchKey(ListNode* head, int key) {
        ListNode* temp = head;
        
        while(temp != nullptr){
            if(temp->val == key) return true;
            temp = temp->next;
        }
        
        return false;
    }
};  

// Technique:
// Linear Search Traversal in LL

// Approach:
// 1. Check head node to temp node.
// 2. Traverse until last node using while(temp)
// 3. Check temp->val at each traversal and return true if key is found.

// TC: O(N)
// SC: O(1)

// Verdict: Optimal

int main()
{
    // Main Function placeholder for testing
    return 0;
}
