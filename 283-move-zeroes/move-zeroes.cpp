class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int temp;
        int j = 0;
        for(int i = 0; i < nums.size(); i++){
            if (nums[i] != 0){
                temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
                j++;
            }
        }
    }
};