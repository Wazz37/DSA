class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int index = nums.size();
        int mid = 0;
        while (left<=right){
            mid = left + (right - left)/2;

            if (nums[mid]>=target){
                index = mid;
                right = mid - 1;
            }
            else
                left = mid + 1;
        }

        return index;
    }
};