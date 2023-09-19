class Solution {
public:
    int helper(int i, int n, vector<int> &nums, vector<int> &dp){
        if(i>= n-1){
            return 0;
        }
        if(dp[i]!= -1) return dp[i];
        long long ans= INT_MAX;
            for(int j= 1; j<= nums[i]; ++j){
                long long jump = 1ll*1+helper(j+i, n, nums, dp);
                ans= min(ans, jump);
            }
        return dp[i]= ans;
    }
    int jump(vector<int>& nums) {
        int n= nums.size();
        vector<int> dp(n, -1);
        return helper(0, n, nums, dp);
    }
};