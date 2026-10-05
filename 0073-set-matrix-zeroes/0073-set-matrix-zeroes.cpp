class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        vector<bool> rows(matrix.size(), false);
        vector<bool> columns(matrix[0].size(), false);

        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[i].size(); j++){
                if(matrix[i][j] == 0){
                    rows[i] = true;
                    columns[j] = true;
                }
            }
        }
        for(int i = 0; i < rows.size(); i++){
            if(rows[i] == true){
                for(int j = 0; j < columns.size(); j++){
                    matrix[i][j] = 0;
                }
            }
        }
        for(int j = 0; j < columns.size(); j++){
            if(columns[j] == true){
                for(int i = 0; i < rows.size(); i++){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};