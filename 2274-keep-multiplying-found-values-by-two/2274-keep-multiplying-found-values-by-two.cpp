class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==original)
            {
                original=2*original;
            }
            else continue;
        }
        return original;
    }
};

// 1 3 5 6 12 , o=3