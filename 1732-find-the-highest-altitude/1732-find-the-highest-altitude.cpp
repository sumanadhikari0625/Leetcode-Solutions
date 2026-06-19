class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int maxi=INT_MIN;
        int altitude=0;
        for(int i=0;i<n;i++)
        {
            altitude+=gain[i];
            maxi=max(maxi,altitude);
        }
        if(maxi>0)
        return maxi;

        return 0;
    }
};