class Solution {
public:
    int trap(vector<int>& height) {
        int ans= 0;
        int n= height.size();
        vector<int> left(n, 0); vector<int> right(n, 0);
        left[0]= height[0]; right[n-1]= height[n-1];
        for(int i= 1; i<n; i++){
            left[i]= max(height[i], left[i-1]);
            right[n-i-1]= max(height[n-i-1], right[n-i]);
        }
        // for(auto it: left) cout<<it<<" ";
        // cout<<endl;
        // for(auto it: right) cout<<it<<" ";
        for(int i= 0; i<n; i++){
            ans =ans+abs(height[i]-(min(left[i], right[i])));
        }
        return ans;
    }
};