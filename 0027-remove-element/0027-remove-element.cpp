class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        map<int,int>mpp;int i=0;
        for(auto it:nums){mpp[it]++;}
        for(auto it:mpp){
            if(it.first==val)continue;
            else{
                for(int j=0;j<it.second;j++)
                nums[i++]=it.first;

            }
        }
        return nums.size()-mpp[val];
    }
};