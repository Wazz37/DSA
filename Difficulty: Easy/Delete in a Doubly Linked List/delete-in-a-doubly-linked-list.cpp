/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        // Your code here
        
        if(head==nullptr || head->next==nullptr) return nullptr;
        
        if (x==1){
            head = head->next;
            head->prev = nullptr;
            return head;
        }
        
        Node *curr = head;
        for(int i=1; i<x-1; i++){
            curr = curr->next;
        }
        
        Node *delNode = curr->next;
        curr->next = delNode->next;
        if (delNode->next!=nullptr){
            delNode->next->prev = curr;
        }
        
        return head;
        
        
    }
};