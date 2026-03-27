class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;

        for(int i = 0; i < nums.size(); i++){
            if (nums[i]==nums[k]){
                continue;
            }
            else{
                swap(nums[k+1], nums[i]);
                k++;
            }
        }

        return k + 1;
    }
};