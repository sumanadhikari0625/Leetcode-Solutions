class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mini=0;
        for(int i=0;i<nums.size();i+=2)
        {
            mini+= nums[i];
        }
        return mini;
    }
};

//1 2 2 5 6 6