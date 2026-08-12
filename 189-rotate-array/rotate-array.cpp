class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> arr(nums.size());

        k = k % nums.size();

        for(int i = 0; i < nums.size(); i++){
            arr[i] = nums[(nums.size() - k + i) % nums.size()];
        }

        nums = arr;

        
    }
};