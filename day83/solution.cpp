// Find Kth Node from End of Linked List
//
// Idea:
// Use two pointers.
// Move the first pointer k steps ahead,
// then move both pointers together.
//
// When first reaches NULL,
// second will be at the kth node from end.
//
// Key Learning:
// Two-pointer technique avoids counting length first.


/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        Node* first = head;
        Node* second = head;

        // move first pointer k steps
        for (int i = 0; i < k; i++) {
            if (first == NULL)
                return -1;   // k > length
            first = first->next;
        }

        // move both pointers
        while (first != NULL) {
            first = first->next;
            second = second->next;
        }

        return second->data;
    }
};

