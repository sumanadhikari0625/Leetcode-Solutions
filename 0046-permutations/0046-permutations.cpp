class Solution {
public:
    void fre(vector<int>&nums,vector<vector<int>>&ans,vector<int>&ds,int freqa[])
    {
        if(ds.size()==nums.size())
        {
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(freqa[i]==0)
            {
                ds.push_back(nums[i]);
                freqa[i]=1;
                fre(nums,ans,ds,freqa);
                freqa[i]=0;
                ds.pop_back();
            }
        }

    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int>>ans;
        int n=nums.size();
        int freqa[n];
        for(int i=0;i<n;i++) freqa[i]=0;
        fre(nums,ans,ds,freqa);
        return ans;
    }
};