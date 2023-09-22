class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>alt(n+1);
        alt[0]=0;
        for(int i=0;i<n;i++)
        {
          alt[i+1]= gain[i]+alt[i];
          //cout<<alt[i]<<endl;
        }
        return *max_element(alt.begin(),alt.end());
    }
};