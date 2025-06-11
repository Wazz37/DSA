class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        Node *head = new Node;
        head->data = arr[0];
        head->next = nullptr;
        
        Node *tail = head;
        
        for(int i=1; i<arr.size(); i++){
            
            Node *temp = new Node;
            temp->data = arr[i];
            temp->next = nullptr;
            tail->next = temp;
            tail = temp;
        }
        
        return head;
        
        // Node *current = head;
        
        // while(current!=nullptr){
        //     std::cout << current->data << std::endl;
        //     current = current->next;
        // }
        
    }
};