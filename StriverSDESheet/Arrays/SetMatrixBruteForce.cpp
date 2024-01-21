class Solution {
public:
    void markRow(vector<vector<int>>& matrix, int n, int m, int i){
        for(int j=0;j<m;j++){
            if(matrix[i][j]!=0){
                matrix[i][j] = -1;
            }
        }
    }

     void markCol(vector<vector<int>>& matrix, int n, int m, int j){
        for(int i=0;i<n;i++){
            if(matrix[i][j]!=0){
                matrix[i][j] = -1;
            }
        }
    }

    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j] == 0){
                    markRow(matrix, n, m, i);
                    markCol(matrix, n, m, j);
                }
            }
        }

           for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j] == -1){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

time and space complexity

time: O((N*M)    *(N+M))       * (N+M)
      traversing marking-1   marking again 0

Space O(1)