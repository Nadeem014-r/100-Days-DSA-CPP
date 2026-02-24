// Rotate Linked List by k Nodes
//
// Idea:
// 1. Find length and last node.
// 2. Reduce k using modulo.
// 3. Traverse to kth node.
// 4. Break list and reconnect ends.
//
// Key Learning:
// Linked list rotation involves
// splitting and reconnecting pointers.

/*
class Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* rotate(Node* head, int k) {
        if (!head || !head->next || k == 0)
            return head;

        // Step 1: find length and last
        Node* temp = head;
        int len = 1;
        while (temp->next) {
            temp = temp->next;
            len++;
        }

        // Step 2: reduce k
        k = k % len;
        if (k == 0)
            return head;

        // Step 3: find kth node
        Node* curr = head;
        for (int i = 1; i < k; i++)
            curr = curr->next;

        // Step 4: rotate
        Node* newHead = curr->next;
        curr->next = NULL;
        temp->next = head;

        return newHead;
    }
};
