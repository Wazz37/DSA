/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:

    void counting(ListNode *head, int &count){
        ListNode *curr = head;
        while(curr){
            count++;
            curr = curr->next;
        }
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int countA = 0, countB = 0;
        counting(headA, countA);
        counting(headB, countB);

        int diff = abs(countA - countB);
        if (countA>countB){
            while(diff>0){
                headA = headA->next;
                diff--;
            }
        }
        else{
            while(diff>0){
                headB = headB->next;
                diff--;
            }
        }
        
        while(headA && headA!=headB){
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
};