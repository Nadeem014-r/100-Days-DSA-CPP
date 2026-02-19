// Find Starting Node of Cycle (Floyd’s Algorithm)
//
// Step 1:
// Use slow and fast pointers to detect cycle.
//
// Step 2:
// Move slow to head and advance both
// pointers one step at a time.
//
// Meeting point gives cycle start.
//
// Key Learning:
// Floyd’s algorithm can detect and locate
// the start of a cycle efficiently.


/*
class Node {
public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/


class Solution {
  public:
    int cycleStart(Node* head) {
        Node* slow = head;
        Node* fast = head;

        // Step 1: detect cycle
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
                break;
        }

        // no cycle
        if (fast == NULL || fast->next == NULL)
            return -1;

        // Step 2: find start
        slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        return slow->data;
    }
};
