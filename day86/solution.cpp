// Detect Cycle in Linked List (Floyd's Algorithm)
//
// Idea:
// Use slow and fast pointers.
// Slow moves one step, fast moves two steps.
//
// If a cycle exists, both pointers
// will eventually meet.
//
// Key Learning:
// Two-pointer technique helps detect
// cycles without extra space.


/*
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
} */

class Solution {
  public:
    bool detectLoop(Node* head) {
        Node* slow = head;
        Node* fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
                return true;
        }

        return false;
    }
};
