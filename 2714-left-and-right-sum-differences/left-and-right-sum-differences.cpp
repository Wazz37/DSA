class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> left(nums.size(), 0);
        vector<int> right(nums.size(), 0);
        vector<int> ans(nums.size(), 0);
        int total_sum = 0;

        for(int i = 0; i < nums.size(); i++){
            total_sum = total_sum + nums[i];
        }

        left[0] = 0;
        right[nums.size() -1] = 0;

        for(int i = 0; i < nums.size() - 1; i++){
            left[i+1] = left[i] + nums[i];
            right[i] = total_sum - left[i+1];
        }

        for(int i = 0; i < nums.size(); i++){
            std::cout << "left : " << left[i] << "  right : " << right[i] << std::endl;
            if (left[i] >= right[i]){
                ans[i] = left[i] - right[i];
            }
            else{
                ans[i] = right[i] - left[i];
            }
        }

        return ans;


    }
};