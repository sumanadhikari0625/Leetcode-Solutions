class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        int ones=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
                ones++;
            else 
            {
                maxi=max(ones,maxi);
                ones=0;
            }
        }
        return max(maxi,ones);
    }
};