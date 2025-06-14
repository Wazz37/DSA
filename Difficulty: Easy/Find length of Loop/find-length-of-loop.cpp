/*
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        Node *slow = head, *fast = head;

        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            
            if (slow==fast){
                slow = head;
                break;
            }
        }
        
        if (!fast || !fast->next) return 0;
        
        while(slow!=fast){
            slow = slow->next;
            fast = fast->next;
        }
        
        slow = slow->next;
        int count = 0;
        
        while(slow!=fast){
            count++;
            slow = slow->next;
        }
        
        return count + 1;
    }
};