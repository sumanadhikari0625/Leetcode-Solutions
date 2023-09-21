class Solution {
public:
    int xorOperation(int n, int start) {
        int nums[n];
        int ans=0;
        for(int i=0;i<n;i++)
        {
            nums[i]=start+2*i;
            ans=ans^nums[i];
        }
        // for(int i=0;i<n;i++)
        // {
        //    // ans=nums[i]^nums[i+1];
        //     ans=ans^nums[i];
        // }
        return ans;
    }
};