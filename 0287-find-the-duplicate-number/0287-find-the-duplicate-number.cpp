class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int n: nums){
            int i= abs(n);
            if(nums[i]>0) nums[i]= nums[i]*-1;
            else  return i;
        }
        return -1;
    }
};