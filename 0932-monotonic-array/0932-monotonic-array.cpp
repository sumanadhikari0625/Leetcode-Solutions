class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        return is_sorted(nums.begin(), nums.end()) || is_sorted(nums.begin(), nums.end(), greater<int>());
        // int n= nums.size();
        // bool dec= false, inc= false;
        // for(int i= 0; i<n-1; ++i){
        //     if(nums[i]<nums[i+1]) inc= true;
        //     else if(nums[i]>nums[i+1]) dec= true;
        // }
        // if(inc && dec) return false;
        // return true;
    }
};