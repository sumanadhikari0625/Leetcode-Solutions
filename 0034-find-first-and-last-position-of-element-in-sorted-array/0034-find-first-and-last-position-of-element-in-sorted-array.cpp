class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0) return {-1, -1};
        int a= lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int b= upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        b= b-1;
        // cout<<a<<" "<<b;
        // return {1, 1};
        if(a>=n) return {-1, -1};
        if(nums[a]!=target)
        return {-1, -1};
        return {a,b};
    }
};