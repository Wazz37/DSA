class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total_sum = 0;
        for(int i = 0; i < nums.size(); i++){
            total_sum = nums[i] + total_sum;
        }
        int left = 0;
        int right = 0;
        for(int i = 0; i < nums.size(); i++){
            // total_sum = left + right + nums[i];
            right = total_sum - nums[i] - left;
            // std::cout << "right : " << right << std::endl;
           if (left == right){
                return i;
            }
            left = left + nums[i];
            // std::cout << "left : " << left << std::endl;
 
        }

        // std::cout << "total sum : " << total_sum << std::endl;
        return -1;

    }

};