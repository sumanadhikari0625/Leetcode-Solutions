class Solution {
public:

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++)
        {
            long long ans1=1;
            vector<int>ansrow;
            ansrow.push_back(1);
            for(int col=1;col<i;col++)
            {
                ans1=ans1*(i-col);
                ans1= ans1/ col;
                ansrow.push_back(ans1);
            }
            ans.push_back(ansrow);
        }
        return ans;
    }
};