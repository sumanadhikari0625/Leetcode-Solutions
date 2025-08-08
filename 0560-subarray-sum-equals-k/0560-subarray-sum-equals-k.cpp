class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int prefix=0;
        unordered_map<int,int>mpp;
        mpp[0]=1;
        int remove=0,count=0;
        for(int i=0;i<n;i++)
        {
            prefix+=nums[i];
            remove=prefix-k;
            count+=mpp[remove];
            mpp[prefix]+=1;
        }
        return count;
    }
};