class Solution {
public:
    void fre(vector<int>&c,int n,int i,vector<vector<int>>&ds,vector<int>&ans,int target)
    {
        if(target==0){
            ds.push_back(ans);
            return;}
        for(int ind=i;ind<n;ind++)
        {
            if(ind>i && c[ind]==c[ind-1]) continue;
            if(c[ind]>target) break;
            ans.push_back(c[ind]);
            fre(c,n,ind+1,ds,ans,target-c[ind]);
            ans.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n=candidates.size();
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ds;
        vector<int>ans;
        fre(candidates,n,0,ds,ans,target);
        return ds;
    }
};