class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size(); 

        vector<int> arr;
        int top = 0;
        int right = n-1;
        int down = m-1;
        int left = 0;

        while (top<=down && left<=right){
            for(int j=left; j <= right; j++){
                arr.push_back(matrix[top][j]);
            }
            top++;

            for(int i = top; i <= down; i++){
                arr.push_back(matrix[i][right]);
            }
            right--;

            if (top<=down){
                for(int j = right; j>=left; j--){
                    arr.push_back(matrix[down][j]);
                }
                down--;
            }

            if (left<=right){
                for(int i = down; i>=top; i--){
                    arr.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return arr;
        
    }
};