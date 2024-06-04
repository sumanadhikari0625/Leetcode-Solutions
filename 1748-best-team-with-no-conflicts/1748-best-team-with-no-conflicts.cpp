class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        int n=scores.size();
        int dp[n],ans=0;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            v.push_back({ages[i],scores[i]});
        }
        sort(v.begin(),v.end());

        for(int i=0;i<n;i++)
        {
            dp[i]=v[i].second;
            for(int j=0;j<i;j++)
            {
                if(v[j].second<=v[i].second)
                {
                    dp[i]=max(dp[i],dp[j]+v[i].second);
                }
            }
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};