// Delete Node at Given Position in Linked List
//
// Idea:
// Traverse to the (x - 1) node,
// then adjust pointers to remove the target node.
//
// Handle deletion of the head separately.
//
// Key Learning:
// Safe pointer updates and memory deletion
// are important in linked list operations.

/*
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        if (head == NULL)
            return NULL;

        // delete first node
        if (x == 1) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        Node* temp = head;

        // move to (x-1) node
        for (int i = 1; i < x - 1 && temp->next != NULL; i++) {
            temp = temp->next;
        }

        // if node exists, delete it
        if (temp->next != NULL) {
            Node* nodeToDelete = temp->next;
            temp->next = nodeToDelete->next;
            delete nodeToDelete;
        }

        return head;
    }
};
