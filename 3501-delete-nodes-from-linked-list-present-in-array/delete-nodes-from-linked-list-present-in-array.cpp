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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> mpp;
        ListNode *dummy = new ListNode(-1);
        dummy->next = head;
        head = dummy;
        ListNode *curr = head, *prev = nullptr;

        for(int i=0; i<nums.size(); i++){
            mpp.insert(nums[i]);
        }

        while(curr){
            prev = curr;
            curr = curr->next;
            
            while (curr && mpp.find(curr->val)!=mpp.end()){
                curr = curr->next;
            }
            
            prev->next = curr;
            
        }

        return head->next;
    }
};