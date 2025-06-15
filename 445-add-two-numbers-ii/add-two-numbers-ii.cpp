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
    ListNode *reverse(ListNode *curr, ListNode *prev){
        while(curr){
            ListNode *temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }

    void traverse(ListNode *node){
        while(node){
            cout << node->val << "->";
            node = node->next;
        }
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *prev = nullptr, *curr1 = l1, *curr2 = l2;

        l1 = reverse(l1, prev);
        l2 = reverse(l2, prev);

        // traverse(l1);
        // cout<<endl;
        // traverse(l2);

        ListNode *head = new ListNode;
        ListNode *sum_node = head;

        int carry = 0;

        while(l1 && l2){
            int sum = l1->val + l2->val + carry;
            carry = sum/10;
            int digit = sum%10;
            ListNode *temp = new ListNode(digit);
            sum_node->next = temp;
            sum_node = temp;
            l1 = l1->next;
            l2 = l2->next;
        }
        
        while(l1){
            int sum = l1->val + carry;
            carry = sum/10;
            int digit = sum%10;
            ListNode *temp = new ListNode(digit);
            sum_node->next = temp;
            sum_node = temp;
            l1 = l1->next;
        }

        while(l2){
            int sum = l2->val + carry;
            carry = sum/10;
            int digit = sum%10;
            ListNode *temp = new ListNode(digit);
            sum_node->next = temp;
            sum_node = temp;
            l2 = l2->next;
        }
        head = head->next;
        head = reverse(head, nullptr);

        if (carry>0){
            ListNode *temp = new ListNode(carry);
            temp->next = head;
            head = temp;
        }

        return head;

    }
};