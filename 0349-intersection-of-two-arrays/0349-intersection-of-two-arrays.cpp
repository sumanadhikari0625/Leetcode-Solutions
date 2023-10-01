class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s;
        vector<int>ans;
        for(int i=0;i<nums1.size();i++)
        {
            if(find(nums2.begin(),nums2.end(),nums1[i])!=nums2.end())
                s.insert(nums1[i]);
        }
        for(auto i:s)
        {
            ans.push_back(i);
        }
        return ans;
    }
};