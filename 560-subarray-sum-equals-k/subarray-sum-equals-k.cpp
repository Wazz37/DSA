class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map<int, int> mpp;
        mpp[0] = 1;
        int ans = 0; 
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum = sum + nums[i];
        
            if (mpp.find(sum-k)!=mpp.end()){
                ans = ans + mpp[sum-k];
            }

            mpp[sum]++;

        }
        return ans;
    }
};