class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int positive_index = 0;
        int negative_index = 1;

        vector<int> arr(nums.size());
        for(int i=0; i<nums.size(); i++){
            if (nums[i] > 0){
                arr[positive_index] = nums[i];
                positive_index = positive_index + 2;
            }

            else{
                arr[negative_index] = nums[i];
                negative_index = negative_index + 2;
            }

        }

        return arr;
    }
};