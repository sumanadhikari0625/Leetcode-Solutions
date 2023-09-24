class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> iv;
        vector<int> jv;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    iv.push_back(i);
                    jv.push_back(j);
                }
            }
        }
        for(int i=0;i<iv.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                matrix[iv[i]][j]=0;
            }
            for(int j=0;j<matrix.size();j++){
                matrix[j][jv[i]]=0;
            }
        }
    }
};