class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size= nums.size()- count(nums.begin(), nums.end(), val);
        map<int, int> mpp;
        for(auto it: nums) mpp[it]++;
        int j= 0;
        for(auto it: mpp){
            if(it.first==val){
                continue;
            }
            else{
                int freq= it.second;
                for(int i= 0; i<freq; i++){
                    nums[j++]= it.first;
                }
            }
        }
        // cout << size;
            return size;
    }
};