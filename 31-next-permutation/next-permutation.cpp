class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index = -1;
        int n = nums.size();

        for(int i = (n - 2); i >= 0; i--){
            if (nums[i] < nums[i+1]){
                index = i;
                
                break;
            }
        }

        int temp_2 = 0;
        int k = nums.size() - 1;  

        if (index==-1){
            for(int i=0; i<k; i++){
                temp_2 = nums[i];
                nums[i] = nums[k];
                nums[k] = temp_2;
                k--;
            }
        }

        else{  
            int temp_0 = 0;
            for(int i = n-1; i > index; i--){  
                
                if (nums[i] > nums[index]){
                    temp_0 = nums[index];
                    nums[index] = nums[i];
                    nums[i] = temp_0;
                    break;
                }
            }

            int temp = 0;
            int j = nums.size() - 1;

            for(int i=index+1; i < j; i++){
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                j--;
            }        
        }
    }
};