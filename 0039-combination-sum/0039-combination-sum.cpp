class Solution {
public:

    void fre(vector<int>&c,int n,int i,vector<vector<int>>&ds,int target,vector<int>&ans)
    {
        if(i==n) {
            if(target==0)
                ds.push_back(ans);
            return;
        }
        if(c[i]<=target)
        {
            ans.push_back(c[i]);
            fre(c,n,i,ds,target-c[i],ans);
            ans.pop_back();
        }
        fre(c,n,i+1,ds,target,ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ds;
        vector<int>ans;
        int n=candidates.size();
        fre(candidates,n,0,ds,target,ans);
        return ds;
    }
};