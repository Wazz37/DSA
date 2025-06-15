/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
    Node* reverse(Node* curr, Node *prev){
        while(curr){
            Node *temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        
        return prev;
    }
    
    void traverse(Node *curr){
        while(curr){
            // cout << curr->data << "->";
            curr = curr->next;
        }
    }
  public:
    Node* addOne(Node* head) {
        // Your Code here
        Node *prev = nullptr;
        head = reverse(head, prev);
        // traverse(head);
        int carry = 0;
        int sum = head->data + 1;
        int digit = sum%10;
        
        head->data = digit;
        carry = sum/10;

        Node *curr = head->next;
        while(curr){
            sum = curr->data + carry;
            digit = sum%10;
            carry = sum/10;
            curr->data = digit;
            curr = curr->next;
        }
        
        head = reverse(head, nullptr);
        
        if (carry>0){
            Node* temp = new Node(carry);
            temp->next = head;
            head = temp;
        }
        
        // head = reverse(head, nullptr);
        // traverse(head);
        
        return head;
            
        // return head of list after adding one
    }
};