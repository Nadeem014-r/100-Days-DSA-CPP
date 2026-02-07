// Search Element in Linked List
//
// Idea:
// Traverse the linked list from head
// and compare each node's data with the key.
//
// If found, return true.
// If traversal ends, return false.
//
// Key Learning:
// Linear traversal is used for searching
// in linked lists.


/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
}; */

class Solution {
  public:
    bool searchKey(Node* head, int key)
    {
        Node* temp = head;

        while (temp != NULL) 
        {
            if (temp->data == key)
                return true;

            temp = temp->next;
        }

        return false;
    }
};
