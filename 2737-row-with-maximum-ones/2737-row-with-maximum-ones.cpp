class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int m=mat.size();
        int c2=0;
        int index=0;
        int n=mat[0].size();
        for(int i=0;i<m;i++)
        {   
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]==1){
                    count++;
                }
            }
            if(count>c2){
                index=i;
            }
            c2= max(c2,count);
        }
        return{index,c2};
    }
};