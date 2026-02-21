// Intersection of Two Linked Lists (Using Hashing)
//
// Idea:
// Store elements of second list in a set.
// Traverse first list and check presence in set.
//
// If found, create node in result list.
//
// Key Learning:
// Hashing helps efficiently find
// common elements between lists.

/* structure of list node:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution {
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        unordered_set<int> st;

       
        Node* temp = head2;
        while (temp) {
            st.insert(temp->data);
            temp = temp->next;
        }

        Node* head = NULL;
        Node* tail = NULL;

      
        temp = head1;
        while (temp) {
            if (st.count(temp->data)) 
            {
                Node* newNode = new Node(temp->data);

                if (!head) {
                    head = tail = newNode;
                } else {
                    tail->next = newNode;
                    tail = newNode;
                }
            }
            temp = temp->next;
        }

        return head;
    }
};
