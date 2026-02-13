// Find Middle of Linked List (Slow–Fast Pointer)
//
// Idea:
// Use two pointers:
// slow moves one step,
// fast moves two steps.
//
// When fast reaches the end,
// slow will be at the middle.
//
// Key Learning:
// Two-pointer technique helps solve
// linked list problems efficiently.

/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */

class Solution {
  public:
    int getMiddle(Node* head) {
        Node* slow = head;
        Node* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow->data;
    }
};
