class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        vector<int> row(r, 1);
        vector<int> column(c, 1);
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                if(matrix[i][j] == 0){
                    row[i] = 0;
                    column[j] = 0;
                }
            }
        }
        for(int i = 0; i < r; i++){
            if(row[i] == 0){
                for(int j = 0; j < c; j++){
                    matrix[i][j] = 0;
                }
            }
        }
        for(int j = 0; j < c; j++){
            if(column[j] == 0){
                for(int i = 0; i < r; i++){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};