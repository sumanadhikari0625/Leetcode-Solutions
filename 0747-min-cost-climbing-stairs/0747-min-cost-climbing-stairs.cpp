class Solution {
public:
    int solve(vector<int>&cost,int n,int i,vector<int>&dp)
    {
      //if(i==n-1) return dp[i];
      if(i>=n) return 0;
      if(dp[i]!=-1) return dp[i];
      else{
        int ans1=  solve(cost,n,i+1,dp)+ cost[i];
        int ans2=  solve(cost,n,i+2,dp)+ cost[i];
        dp[i] =min(ans1,ans2);
        return dp[i];
      }
      
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n,-1);
        int ans1= solve(cost,n,0,dp);
        int ans2= solve(cost,n,1,dp);
        return min(ans1,ans2);
    }
};