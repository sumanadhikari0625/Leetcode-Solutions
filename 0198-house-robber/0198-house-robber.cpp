class Solution {
public:
    int robber(int n, int i, vector<int> &nums, vector<int> &dp){
        if(i==n-1)
        return nums[i];
        if(i==n)
        return 0;
        if(dp[i]!=-1) return dp[i];
        else{
            int pick= nums[i]+ robber(n,i+2,nums, dp);
            int notpick= robber(n,i+1,nums, dp);
            return dp[i]= max(pick , notpick); 
        }
    }

    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n, -1);
        int ans= robber(n, 0, nums, dp);
        return ans;
        
    }
};