class Solution 
{
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) 
    {
        sort(arr.begin(),arr.end());
        
        int m = INT_MAX;
        for(int i=0;i<arr.size()-1;i++)
            m = min(m,arr[i+1]-arr[i]);

        vector<vector<int>> ans;
        for(int i=0;i<arr.size()-1;i++)
            if(arr[i+1]-arr[i] == m)
                ans.push_back({arr[i],arr[i+1]});
        
        return ans;
    }
};

// 1 3 6 10 15
// 2 3 4 5 