class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<int,vector<int>>pq;
        for(auto it: nums)
        {
            pq.push(it);
        }
        int i= 0;
        int ans= 0;
        while(i<k){
            ans= pq.top();
            pq.pop();
            i++;
        }
        return ans;
    }
};