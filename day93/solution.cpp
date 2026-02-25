// Segregate Even and Odd Nodes in Linked List
//
// Idea:
// Traverse the list and build two lists:
// one for even nodes and one for odd nodes.
//
// Finally, connect even list with odd list.
//
// Key Learning:
// Nodes can be rearranged efficiently
// without creating new nodes.

// User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* divide(Node* head)
    {
        if (!head || !head->next)
            return head;

        Node* evenHead = NULL;
        Node* evenTail = NULL;
        Node* oddHead = NULL;
        Node* oddTail = NULL;

        Node* curr = head;

        while (curr) {
            if (curr->data % 2 == 0) 
            {
                // even node
                if (!evenHead) {
                    evenHead = evenTail = curr;
                } else {
                    evenTail->next = curr;
                    evenTail = curr;
                }
            } else {
                // odd node
                if (!oddHead) {
                    oddHead = oddTail = curr;
                } else {
                    oddTail->next = curr;
                    oddTail = curr;
                }
            }
            curr = curr->next;
        }

        // connect even and odd
        if (evenTail)
            evenTail->next = oddHead;

        if (oddTail)
            oddTail->next = NULL;

        return evenHead ? evenHead : oddHead;
    }
};
