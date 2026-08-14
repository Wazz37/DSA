class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int max_num = INT_MIN;
        int ans = 0;

        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }

        for(auto x : mp){
            if (x.second > max_num){
                max_num = x.second;
                ans = x.first;
            }
        }

        return ans;
    }
};