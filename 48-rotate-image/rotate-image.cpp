class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int temp=0;
        for(int i=0; i<matrix.size(); i++){
            for(int j=i; j<matrix.size(); j++){
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp; 
            }
        }

        int temp_2 = 0;
        for(int i=0; i<matrix.size(); i++){
            int k = matrix.size()-1;
            for(int j=0; j<matrix.size() && k > j; j++, k--){
                    temp_2 = matrix[i][j];
                    matrix[i][j] = matrix[i][k];
                    matrix[i][k] = temp_2;
            }
        }
    }
};