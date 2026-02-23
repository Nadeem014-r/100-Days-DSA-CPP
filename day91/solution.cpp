// Merge Sort for Linked List
//
// Idea:
// 1. Find middle using slow–fast pointer.
// 2. Split list into two halves.
// 3. Recursively sort both halves.
// 4. Merge sorted halves.
//
// Key Learning:
// Divide and conquer can be applied
// effectively to linked lists.



/*
class Node {
public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    
    Node* getMid(Node* head) {
        Node* slow = head;
        Node* fast = head->next;

        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

   
    Node* merge(Node* l1, Node* l2) 
    {
        if (!l1) return l2;
        if (!l2) return l1;

        if (l1->data <= l2->data) {
            l1->next = merge(l1->next, l2);
            return l1;
        } else {
            l2->next = merge(l1, l2->next);
            return l2;
        }
    }

    Node* mergeSort(Node* head) 
    {
        if (!head || !head->next)
            return head;

       
        Node* mid = getMid(head);

        
        Node* right = mid->next;
        mid->next = NULL;

        
        Node* left = mergeSort(head);
        right = mergeSort(right);

        
        return merge(left, right);
    }
};
