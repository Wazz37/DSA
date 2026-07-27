class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        double max_avg = INT_MIN;

        for(int i = 0; i < k; i++){
            sum = sum + nums[i];
        }

        max_avg = sum/k;

        for(int i = k; i < nums.size(); i++){
            sum = sum + nums[i];
            sum = sum - nums[i - k];
            max_avg = max(max_avg, sum/k);
        }

        return max_avg;
    }
};