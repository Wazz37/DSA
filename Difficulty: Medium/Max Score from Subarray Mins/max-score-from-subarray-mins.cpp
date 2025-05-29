

class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
        // Your code goes here
        int sum = INT_MIN;
        
        for(int i=0; i<(arr.size()-1); i++){
            sum = max(arr[i] + arr[i+1], sum);
        }
        return sum;
    }
};
