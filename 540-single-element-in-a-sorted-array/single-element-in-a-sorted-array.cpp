class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0, right = nums.size() - 1, mid = 0;

        if (nums.size()<2) return nums[0];
        if (nums[0]!=nums[1]) return nums[0];
        if (nums[right]!=nums[right-1]) return nums[right];

        while(left<=right){
            mid = left + (right - left)/2;

            if (nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])
                return nums[mid];

            if (mid%2==1){
                if (nums[mid-1]==nums[mid])
                    left = mid + 1;
                else
                    right = mid - 1;
            }
            else
                if (nums[mid]==nums[mid + 1])
                    left = mid + 1;
                else
                    right = mid - 1;
            
        }
        return nums[mid];
    }
};