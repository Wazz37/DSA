class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int j = 0;
        for(int i = 0; i < nums.size(); i++){
            if (nums[i]==nums[j]){
                continue;
            }
            nums[j+1] = nums[i];
            j++;
        }
        return j + 1;
    }
};