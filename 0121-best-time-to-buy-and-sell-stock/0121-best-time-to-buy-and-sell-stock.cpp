class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0) return 0;
        int profit=0;
        int maxp=0;
        int mini= prices[0];
        for(int sp : prices)
        {
            mini= min(mini,sp);
            profit= sp-mini;
            maxp = max(profit,maxp);
        }
        return maxp;
    }
};