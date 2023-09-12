class Solution {
public:

    int cs(int n,vector<int>&dp)
    {
        if(n<=2) return n;
        if(dp[n]!=-1) return dp[n];
        else{
        int climb1= cs(n-1,dp);
        int climb2= cs(n-2,dp);
        return dp[n]=climb1+climb2;
        }
    }

    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return cs(n,dp);
    }
};