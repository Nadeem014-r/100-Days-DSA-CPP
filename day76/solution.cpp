// Insert Node at Beginning of Linked List
//
// Idea:
// Create a new node and make it point
// to the current head of the list.
//
// Update head to the new node.
//
// Key Learning:
// Insertion at the front only requires
// changing the head pointer.


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
    Node *insertAtFront(Node *head, int x)
    {
        Node* newNode = new Node(x);  // create new node
        newNode->next = head;         // point to old head
        head = newNode;               // update head
        return head;
    }
};
