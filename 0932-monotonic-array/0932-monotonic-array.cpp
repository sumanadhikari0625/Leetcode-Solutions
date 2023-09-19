class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n= nums.size();
        bool inc= false, dec= false;
        for(int i= 0; i<n-1;++i){
            if(nums[i]>nums[i+1]) dec= true;
            else if(nums[i]<nums[i+1]) inc= true;
        }
        if(dec && inc) return false;
        return true;
        // we check if the array is increasing or decreasing if the array is both increasing and decreasing then we return false and true other wise

        
    }
};