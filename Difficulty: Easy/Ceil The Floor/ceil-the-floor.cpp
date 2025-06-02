// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        int left = 0;
        int right = arr.size() - 1;
        int mid = 0;
        int floor = -1;
        int ceil = -1;
        sort(arr.begin(), arr.end());
        
        while(left<=right){
            mid = left + (right-left)/2;
            if (x >= arr[mid]){
                floor = mid;
                left = left + 1;
            }
            
            else
                right = right - 1;
            
        }
        
        left = 0;
        right = arr.size() - 1;       

        while(left<=right){
            mid = left + (right-left)/2;
            
            
            if (x <= arr[mid]){
                ceil = mid;
                right = right - 1;
            }
    
            else
                left = left + 1;

        }
        
        
        
        
        if (ceil==-1 && floor ==-1)
            return {-1, -1};
        else if (ceil==-1)
            return {arr[floor], ceil};
        else if (floor==-1)
            return {-1, arr[ceil]};
        else
            return {arr[floor], arr[ceil]};
        
    }
};