// Delete Node at Specific Position in Linked List
//
// Idea:
// Traverse to the (pos - 1) node,
// then update pointers to remove the target node.
//
// Handle deletion of the first node separately.
//
// Key Learning:
// Careful pointer updates ensure the list
// remains connected after deletion.

// User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }

};
*/

Node *deleteAtPosition(Node *head, int pos) {
    if (head == NULL)
        return NULL;

    // delete first node
    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* temp = head;

    // move to (pos - 1) node
    for (int i = 1; i < pos - 1 && temp->next != NULL; i++) {
        temp = temp->next;
    }

    // delete node if exists
    if (temp->next != NULL) {
        Node* delNode = temp->next;
        temp->next = delNode->next;
        delete delNode;
    }

    return head;
}
