/*
class DLLNode {
  public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/
class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        // Your code here
        DLLNode *curr = head, *prev = nullptr;
        while(curr){
            DLLNode *temp = curr->next;
            curr->next = prev;
            curr->prev = temp;
            prev = curr;
            curr = temp;
        }
        
        return prev;
    }
};