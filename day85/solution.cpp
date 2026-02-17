// Remove Duplicates from Sorted Linked List
//
// Idea:
// Traverse the list and compare
// current node with next node.
//
// If values are equal,
// remove the duplicate node.
//
// Key Learning:
// Careful pointer updates help
// remove nodes without breaking the list.

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        if (head == NULL)
            return head;

        Node* curr = head;

        while (curr->next != NULL) {
            if (curr->data == curr->next->data) {
                Node* temp = curr->next;
                curr->next = temp->next;
                delete temp;
            } else {
                curr = curr->next;
            }
        }

        return head;
    }
};
