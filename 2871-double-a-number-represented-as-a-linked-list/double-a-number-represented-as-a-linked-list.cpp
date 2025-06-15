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
    ListNode* reverse(ListNode *curr, ListNode *prev){
        
        while(curr)
        {
            ListNode *temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        return prev;
    }

public:
    ListNode* doubleIt(ListNode* head) {
        ListNode *curr = head, *prev = nullptr;
        head = reverse(curr, prev);
        curr = head;
        int carry = 0;
        while(curr){
            int sum = 2*curr->val + carry;
            carry = sum/10;
            int digit = sum%10;
            curr->val = digit;
            curr = curr->next;
        }

        head = reverse(head, nullptr);
        
        if (carry>0){
            ListNode *temp = new ListNode(carry);
            temp->next = head;
            head = temp;
        }

        return head;
    }
};