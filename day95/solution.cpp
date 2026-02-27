// Rearrange Linked List (Alternate Split + Reverse)
//
// Idea:
// 1. Split list into odd and even positioned nodes.
// 2. Reverse the even-positioned list.
// 3. Append reversed list to the end of odd list.
//
// Key Learning:
// Multiple linked list operations can be
// combined to solve rearrangement problems.

/*
  reverse alternate nodes and append at the end
  The input list will have at least one element
  Node is defined as
  struct Node
  {
      int data;
      struct Node *next;

      Node(int x){
        data = x;
        next = NULL;
      }

   };

*/
class Solution {
  public:
    Node* reverse(Node* head) {
        Node* prev = NULL;
        while (head) {
            Node* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }

    void rearrange(Node* head) {
        if (!head || !head->next)
            return;

        Node* odd = head;
        Node* even = head->next;
        Node* evenHead = even;

        // Step 1: split alternate nodes
        while (even && even->next) {
            odd->next = even->next;
            odd = odd->next;

            even->next = odd->next;
            even = even->next;
        }

        // terminate first list
        odd->next = NULL;

        // Step 2: reverse extracted list
        evenHead = reverse(evenHead);

        // Step 3: append
        odd->next = evenHead;
    }
};
