// Print Linked List Elements (Traversal)
//
// Idea:
// Start from the head node and
// move through each node using next pointer.
//
// Continue traversal until NULL is reached.
//
// Key Learning:
// Understanding traversal is essential
// before performing any linked list operation.


/*
class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> printList(Node *head) {
        vector<int> ans;

        Node* temp = head;

        while (temp != NULL) {
            ans.push_back(temp->data);
            temp = temp->next;
        }

        return ans;
    }
};
