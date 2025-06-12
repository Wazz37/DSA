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
    bool isPalindrome(ListNode* head) {
        ListNode *slow = head, *fast = head;
        if (head->next==nullptr) return true;
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *prev = nullptr;
        ListNode *current = slow->next;
        while(current!=nullptr){
            ListNode *temp = current->next;
            current->next = prev;
            prev = current;
            current = temp;
        }
        current = head;
        while(prev!=nullptr){
            if (current->val!=prev->val)
                return false;
            current = current->next;
            prev = prev->next;
        }

        return true;
    }
};