// User function Template for C++

/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head, int x) {
        // Write your code here
        Node *dummy = new Node;
        dummy->data = -2;
        dummy->next = *head;
        *head = dummy;
        
        Node *curr = *head;
        while(curr){
            Node *temp = curr;
            curr = curr->next;
            while(curr && curr->data==x){
                curr = curr->next;
            }
            temp->next = curr;
            if (curr)
                curr->prev = temp;
            
        }
        
        
        *head = (*head)->next;
    }
};