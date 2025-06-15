/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode *curr = head;
        while(curr){
            count++;
            curr = curr->next;
        }

        int del = count - n;
        cout << " count : " << count << std::endl;
        
        if(head->next==nullptr) return nullptr;

        
        curr = head;
        ListNode *prev = nullptr;
        
        if (del==0){
            ListNode *newHead = head->next;
            delete head;
            return newHead;
        }

        else{
            for(int i=0; i<del; i++){
                cout << "i : " << i << std::endl;
                if (i==(del-1)){
                    cout << "inside if" << std::endl;
                    ListNode *temp = curr->next;
                    curr->next = curr->next->next;
                }
                curr = curr->next;
            }
        }

        return head;
    }
};