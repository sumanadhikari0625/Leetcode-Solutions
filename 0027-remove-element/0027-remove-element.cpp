class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n= nums.size();
        int size= nums.size()- count(nums.begin(), nums.end(), val);
        map<int, int> mpp;
        for(auto it: nums) ++mpp[it];
        int j= 0;
        for(auto it: mpp){
            if(it.first== val) continue;
            else{
                int count= it.second;
                for(int i= 0; i<count; ++i) nums[j++]= it.first;
            }
        }
        return size;
    }
};