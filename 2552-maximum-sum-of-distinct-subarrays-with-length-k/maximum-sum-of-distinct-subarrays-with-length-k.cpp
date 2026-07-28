class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum = 0;
        long long max_sum = 0;
        unordered_map<int, int> mp;

        if (nums.size() < k){
            return 0;
        }

        for(int i = 0; i < k; i++){
            sum = sum + nums[i];
            mp[nums[i]]++;
        }

        if (mp.size() == k){
            max_sum = max(max_sum, sum);
        }

        // for(auto it: mp){
        //     std::cout << "first : " << it.first << "  second : " << it.second << std::endl;
        // }
        // std::cout << "mp size : " << mp.size() << std::endl;
        // std::cout << "nums size : " << nums.size() << std::endl;

        for(int i = k; i < nums.size(); i++){
            sum = sum + nums[i];
            sum = sum - nums[i - k];

            std::cout << "sum : " << sum << std::endl;

            mp[nums[i]]++;
            mp[nums[i-k]]--;

            if (mp[nums[i - k]] == 0) mp.erase(nums[i - k]);

            if (mp.size() == k){
                max_sum = max(max_sum, sum);
            }
        }

        return max_sum;
    }
};