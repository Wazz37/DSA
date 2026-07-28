class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int ans = 0;
        int left = 0;

        for(int right = 0; right < nums.size(); right++){
            mp[nums[right]]++;

            while(mp[0]>k){
                mp[nums[left]]--;
                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};