class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mpp;
        for(auto it:nums) 
        {
            if(it%2==0)
                mpp[it]++;
        }
        int a=0;
        int b=-1;
        for(auto it:mpp)
        {
           if(it.second>a){
               a=it.second;
               b=it.first;
           }
        } 
        return b;
    }
};