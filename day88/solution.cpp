// Remove Loop from Linked List (Floyd’s Algorithm)
//
// Step 1:
// Detect loop using slow and fast pointers.
//
// Step 2:
// Find the starting point of the loop.
//
// Step 3:
// Traverse to the last node of loop
// and break the connection.
//
// Key Learning:
// Floyd’s algorithm can detect,
// locate, and remove loops efficiently.


/*
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) 
    {
        if (head == NULL || head->next == NULL)
            return;

        Node* slow = head;
        Node* fast = head;

       
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
                break;
        }

       
        if (fast == NULL || fast->next == NULL)
            return;

        
        slow = head;
        if (slow == fast) 
        {
            
            while (fast->next != slow)
                fast = fast->next;
        } else {
            while (slow->next != fast->next)
            {
                slow = slow->next;
                fast = fast->next;
            }
        }

        
        fast->next = NULL;
    }
};
