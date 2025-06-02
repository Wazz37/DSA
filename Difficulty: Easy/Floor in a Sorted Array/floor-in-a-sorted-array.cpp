class Solution {
  public:

    int findFloor(vector<int>& arr, int x) {
        // Your code here
        int left = 0;
        int right = arr.size() - 1;
        int mid = 0;
        int ans = -1;
        while(left<=right){
            mid = left + (right - left)/2;

            if (arr[mid]<=x){
                ans = mid;
                left = mid + 1;
                
            }
            else if (arr[mid]>x){
                right = mid - 1;
            }
        }
        
        return ans;
    }
};
