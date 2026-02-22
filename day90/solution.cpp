// Merge Two Sorted Linked Lists
//
// Idea:
// Compare nodes from both lists and
// attach the smaller node to result list.
//
// Continue until one list ends,
// then attach remaining nodes.
//
// Key Learning:
// Pointer manipulation enables efficient
// in-place merging of sorted lists.



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
    Node* sortedMerge(Node* head1, Node* head2) {
        if (!head1) return head2;
        if (!head2) return head1;

        Node* head = NULL;
        Node* tail = NULL;

        // choose first node
        if (head1->data <= head2->data) {
            head = tail = head1;
            head1 = head1->next;
        } else {
            head = tail = head2;
            head2 = head2->next;
        }

        // merge remaining
        while (head1 && head2) {
            if (head1->data <= head2->data) {
                tail->next = head1;
                head1 = head1->next;
            } else {
                tail->next = head2;
                head2 = head2->next;
            }
            tail = tail->next;
        }

        // attach leftover
        if (head1) tail->next = head1;
        if (head2) tail->next = head2;

        return head;
    }
};
