class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int candiescost=0;
        int free=0;
        if(cost.size()<=2)
        {
            for(auto x:cost)
            {
                candiescost += x;
            }
            return candiescost;
        }
        sort(cost.begin(),cost.end());
        for(int i=cost.size()-1;i>=1;i-=3)
        {
            candiescost+= cost[i] + cost[i-1];
            if(i-1==0 || i-1==1) return candiescost;
            //free = cost[i-1]; 
        }
        candiescost+= cost[0];
        return candiescost;
    }
};