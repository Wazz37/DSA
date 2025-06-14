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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *dummy = new ListNode(-1);
        dummy->next = head;
        head = dummy;
        ListNode *current = head, *prev = nullptr;

        while(current){
            prev = current;
            current = current->next;

            while (current && current->val==val){
                current = current->next;
            }

            prev->next = current;
        }
        return head->next;

    }
};