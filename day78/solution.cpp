// Insert Node at Given Position in Linked List
//
// Idea:
// Traverse to the (pos - 1) node,
// then adjust pointers to insert the new node.
//
// Handle insertion at position 1 separately.
//
// Key Learning:
// Correct pointer updates are essential
// when inserting in the middle of a list.

/*
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertPos(Node *head, int pos, int val) {
        Node* newNode = new Node(val);

        // insert at beginning
        if (pos == 1) {
            newNode->next = head;
            return newNode;
        }

        Node* temp = head;

        // move to (pos-1) node
        for (int i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        // if position is invalid
        if (temp == NULL)
            return head;

        newNode->next = temp->next;
        temp->next = newNode;

        return head;
    }
};
