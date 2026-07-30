class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int left = 0;
        int prod = 1;
        int ans = 0;

        if (nums.size() == 1){
            if (nums[0] >= k) return 0;
            else return 1;
        }
        
        for(int right = 0; right < nums.size(); right++){
            prod = prod * nums[right];

            while (prod >= k){
                prod = prod/nums[left]; 
                left++;
            }
            ans = ans + (right - left + 1);
        }

        return ans;
    }
};