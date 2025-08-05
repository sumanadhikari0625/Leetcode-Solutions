class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        int num=0;
        int more=0;
        for(int i=0;i<nums.size();i++)
        {
            num=nums[i];
            more=target-num;
            if(mpp.find(more)!=mpp.end())
            {
                return{mpp[more],i};
            }
            mpp[num]=i;
        }
        return {};
    }
};