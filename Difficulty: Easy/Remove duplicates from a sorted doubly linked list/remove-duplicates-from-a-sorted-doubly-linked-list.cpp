/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};
*/

class Solution {
  public:

    Node *removeDuplicates(struct Node *head) {
        // Your code here
        Node *curr = head;
        while(curr){
            Node *temp = curr;
            curr = curr->next;
            while(curr && (temp->data==curr->data)){
                curr = curr->next;
            }
            
            temp->next = curr;
            if (curr)
                curr->prev = temp;
            
            
        }
        return head;
    }
};