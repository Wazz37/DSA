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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *slow = head, *fast = head, *temp = head;

        if (head->next==nullptr){
            return NULL;
        }

        while(fast && fast->next){
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        if (slow->next==nullptr){
            temp->next = nullptr;
            return head;
        }

        temp->next = slow->next;
        slow->next = nullptr;

        return head;
    }
};