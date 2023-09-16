class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        if(nums.size()==1 && nums[0]==0)
        return 0;
        int count=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                int c=nums[i];
                count++;
                for(int j=i;j<nums.size();j++)
                {
                    nums[j]-= c;
                }
            }
        }
        return count;
    }
};

// 0 1 3 5 5 