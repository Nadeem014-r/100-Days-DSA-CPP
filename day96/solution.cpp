// Delete Nodes Having Greater Value on Right
//
// Idea:
// 1. Reverse the list.
// 2. Traverse and keep track of maximum so far.
// 3. Delete nodes smaller than max.
// 4. Reverse the list again.
//
// Key Learning:
// Reversal can simplify problems
// involving right-side comparisons.


/*

The structure of linked list is the following

struct Node
{
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

    Node *compute(Node *head) {
        if (!head || !head->next)
            return head;

        // Step 1: reverse
        head = reverse(head);

        // Step 2: delete nodes smaller than max so far
        Node* curr = head;
        int maxSoFar = curr->data;

        while (curr && curr->next) {
            if (curr->next->data < maxSoFar) {
                Node* temp = curr->next;
                curr->next = temp->next;
                delete temp;
            } else {
                curr = curr->next;
                maxSoFar = curr->data;
            }
        }

        // Step 3: reverse again
        return reverse(head);
    }
};
