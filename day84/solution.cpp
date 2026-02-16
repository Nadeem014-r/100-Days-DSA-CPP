// Check Palindrome Linked List
//
// Idea:
// 1. Find the middle using slow–fast pointer.
// 2. Reverse the second half of the list.
// 3. Compare both halves node by node.
//
// Key Learning:
// Multiple linked list techniques can be
// combined to solve complex problems.


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
    Node* reverse(Node* head)
    {
        Node* prev = NULL;
        while (head) {
            Node* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }

    bool isPalindrome(Node *head)
    {
        if (!head || !head->next)
            return true;

        Node* slow = head;
        Node* fast = head;

        // find middle
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        // reverse second half
        Node* second = reverse(slow);
        Node* first = head;

        // compare
        while (second)
        {
            if (first->data != second->data)
                return false;

            first = first->next;
            second = second->next;
        }

        return true;
    }
};
