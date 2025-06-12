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
    ListNode* reverseList(ListNode* head) {
        ListNode *current = head;
        ListNode *prev = nullptr;
        while(current!=nullptr){
            ListNode *temp = current->next;
            // if (temp!=nullptr)
            //     std::cout << "Temp : " << temp->val << std::endl;
            current->next = prev;
            // std::cout << "Current : " << current->val << std::endl;

            prev = current;
            // std::cout << "Prev : " << prev->val << std::endl;

            current = temp;
            // if (current!=nullptr)
            //     std::cout << "Current Next : " << current->val<< std::endl;
            
        }

        return prev;
        
    }
};