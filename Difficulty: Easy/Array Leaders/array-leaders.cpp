

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        int ans = INT_MIN;
        vector<int> nums;
        
        for (int i=arr.size()-1; i>=0; i--){
            
            if (arr[i] >= ans){
                ans = arr[i];
                nums.push_back(ans);
            }
            
        }
        
        int j = nums.size() - 1;
        int temp = 0;
        
        for (int i=0; i<j; i++){
            nums[i] = nums[i] ^ nums[j];
            nums[j] = nums[i] ^ nums[j];
            nums[i] = nums[i] ^ nums[j];
            j--;
        }
        
        return nums;
    }
};