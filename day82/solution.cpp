// Reverse a Linked List (Iterative)
//
// Idea:
// Maintain three pointers:
// prev, curr, and next.
//
// Reverse links one by one while
// traversing the list.
//
// Key Learning:
// Careful pointer updates allow
// in-place reversal of the list.


/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;

        while (curr != NULL) {
            next = curr->next;  // store next
            curr->next = prev;  // reverse link
            prev = curr;        // move prev
            curr = next;        // move curr
        }

        return prev;
    }
};
