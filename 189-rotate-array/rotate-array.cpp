class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> arr(nums.size());
        int n = nums.size();
        k = k%n;
        for(int i=0; i<nums.size(); i++){
            if(i<k){
                arr[i] = nums[n - k + i];
            }
            else{
                arr[i] = nums[i - k];
            }
        }
        nums = arr;

    }
};