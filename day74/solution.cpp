// Count Nodes in a Linked List
//
// Idea:
// Traverse the linked list from head
// and increment a counter for each node.
//
// Stop when NULL is reached.
//
// Key Learning:
// Traversal patterns are the foundation
// of linked list operations.

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
    int getCount(Node* head)
    {
        int count = 0;
        Node* temp = head;

        while (temp != NULL) 
        {
            count++;
            temp = temp->next;
        }

        return count;
    }
};
