class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<=n;i++)
        {
            int idx= abs(nums[i-1])-1;
            nums[idx]=-abs(nums[idx]);
        }
        vector<int>result;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
                result.push_back(i+1);
        }
        return result;
    }
};