class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int zero=0,nonzero=0;
        int n=nums.size();
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                v.push_back(nums[i]);
                //break;
            }
        }
        for(int i=0;i<v.size();i++)
        {
            nums[i]=v[i];
        }
        // for(auto it:nums) cout<<it<<" ";
        int t=v.size();
        for(int i=t;i<n;i++)
        {
            nums[i]=0;
        }
        return;
    }
};