class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size()- 1;
        int mid = 0;
        int shortest = INT_MAX;

        while (left<=right){
            mid = left + (right - left)/2;

            if (nums[left]<=nums[mid]){
                shortest = min(nums[left], shortest);
                left = mid + 1;
            }
            else{
                shortest = min(nums[mid], shortest);
                right = mid - 1;
            }

        }
        return shortest;
    }
};