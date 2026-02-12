#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
public:
    int data;
    ListNode* next;

public:
    ListNode(int data1, ListNode* next1) {
        data = data1;
        next = next1;
    }
    // One Line Alternative
    // ListNode(int val) : data(val), next(nullptr) {}

    ListNode(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Function to convert an array to a linked list
ListNode* arrayToLinkedList(int arr[], int size) {
    if (size == 0) return nullptr;

    // Create head of the linked list
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;

    /* Iterate through the array 
       and create linked list nodes */
    for (int i = 1; i < size; i++) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }

    return head;
}

// Function to print the linked list
void printLinkedList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
}

// To calculate length of linked list
int lengthOfLinkedList(ListNode* head) {
    int length = 0;
    ListNode* current = head;
    
    // Count the nodes
    while (current != nullptr) {
        length++;
        current = current->next;
    }
    
    return length;
}

// To search for an element in the linked list
bool searchElement(ListNode* head, int target) {
    ListNode* current = head;

    // Traverse the linked list
    while (current != nullptr) {
        if (current->data == target) {
            return true;
        }
        current = current->next;
    }

    return false;
}

// Converting an Array to LL and Printing the LL
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Convert array to linked list
    ListNode* head = arrayToLinkedList(arr, size);

    // Print the linked list
    printLinkedList(head);

    // Calculate the length of the linked list
    int length = lengthOfLinkedList(head);
    cout << "Length of the linked list: " << length << endl;

    // Search for an element in the linked list
    int target = 3;
    if (searchElement(head, target)) {
        cout << "Element " << target << " found in the linked list." << endl;
    } else {
        cout << "Element " << target << " not found in the linked list." << endl;
    }

    return 0;
}

/*
// ===> Assigning Values to a Linked List and Printing it by reference

int main() {
    vector<int> arr = {1, 3, 5, 7};
    
    // Assigning values to the nodes
    ListNode* y1 = new ListNode(arr[0], nullptr);
    ListNode* y2 = new ListNode(arr[1], nullptr);
    ListNode* y3 = new ListNode(arr[2], nullptr);
    ListNode* y4 = new ListNode(arr[3], nullptr);

    // Linking of Nodes
    y1->next = y2;
    y2->next = y3;
    y3->next = y4;

    // Printing Nodes with their values and addresses
    cout << y1->data << " " << y1->next << "\n";
    cout << y2->data << " " << y2->next << "\n";
    cout << y3->data << " " << y3->next << "\n";
    cout << y4->data << " " << y4->next << "\n";

    return 0;
}

*/