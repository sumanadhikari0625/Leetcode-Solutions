class Solution {
public:

    void printf(int i,int n,vector<vector<int>>&ds,vector<int>&nums,vector<int>&v)
    {
        if(i==n)
        {
            return;
        }
        v.push_back(nums[i]);
        ds.push_back(v);
        printf(i+1,n,ds,nums,v);
        v.pop_back();
        printf(i+1,n,ds,nums,v);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>v;
        vector<vector<int>>ds;
        ds.push_back(v);
        printf(0,nums.size(),ds,nums,v);
        return ds;
    }
};