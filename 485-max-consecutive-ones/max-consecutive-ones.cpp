class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_num = 0;
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            if (nums[i]==1){
                count++;
                max_num = max(max_num, count);
            }
            else
                count = 0;
        }
        return max_num;
    }
};