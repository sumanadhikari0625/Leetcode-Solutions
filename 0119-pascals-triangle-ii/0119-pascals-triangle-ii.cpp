class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long ans=1;
        vector<int>v;
        v.push_back(ans);
        for(int i=1;i<=rowIndex;i++)
        {
            ans= ans*(rowIndex-i+1);
            ans= ans/i;
            v.push_back(ans);
        }
        //v.push_back(1);
        return v;
    }
};