class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0;
        int right = 0;
        int total_sum = 0;

        for(int i = 0; i < nums.size(); i++){
            total_sum = total_sum + nums[i];
        }


        for(int i = 0; i < nums.size(); i++){
            right = total_sum - left - nums[i];

            if (left == right){
                return i;
            }

            left = left + nums[i];


        }
        return -1;
    }
};