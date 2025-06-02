class Solution {
public:
    int search(vector<int>& nums, int target) {
        int maxi = INT_MIN;
        int right = nums.size()-1;
        int left = 0;
        int mid = -1;
        int index = -1;
        for(int i=0; i< nums.size(); i++){
            if (maxi<nums[i]){
                maxi = nums[i];
                index = i;
            }
        }
        
        right = index;

        while (left<=right){
            mid = left + (right - left)/2;
            if (nums[mid]==target)
                return mid;
            else if (nums[mid]<target)
                left = mid + 1;
            else
                right = mid - 1;
        }

        left = index + 1;
        right = nums.size() - 1;

        while (left<=right){
            mid = left + (right - left)/2;
            if (nums[mid]==target)
                return mid;
            else if (nums[mid]<target)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return -1;

    }
};