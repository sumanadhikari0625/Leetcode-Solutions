class Solution {
public:
    void finds(int ind,vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans)
    {
        ans.push_back(ds);
        for(int i=ind;i<nums.size();i++)
        {
            if(i!=ind && nums[i]==nums[i-1]) continue;
            ds.push_back(nums[i]);
            finds(i+1,nums,ds,ans);
            ds.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        finds(0,nums,ds,ans);
        return ans;
    }
};