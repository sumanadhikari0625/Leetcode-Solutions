class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n);
        int k=0,j=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0)
            {
                v[k]=nums[i];
                k+=2;
            }
            else
            {
                v[j]=nums[i];
                j+=2;
            }
        }
        return v;
    }
};