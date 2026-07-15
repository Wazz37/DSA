class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            // count += nums[i] >= nums[(i + 1) % nums.size()];
            if (nums[(i + 1) % nums.size()] >= nums[i]) continue;
            else count++;
        }
        return count <= 1;
    }
};