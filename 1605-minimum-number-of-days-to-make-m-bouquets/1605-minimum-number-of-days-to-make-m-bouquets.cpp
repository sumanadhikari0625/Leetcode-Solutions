class Solution {
public:

    bool possible(vector<int>& bloomDay,int mid, int m, int k)
    {
        int n=bloomDay.size();
        int cnt=0;
        int fb=0;

        for(int i=0;i<n;i++)
        {
            if(bloomDay[i]<=mid)
            {
                cnt++;
            }
            else
            {
                fb+=(cnt/k);
                cnt=0;
            }
        }
        fb+= (cnt/k);
        return (fb>=m);
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n= bloomDay.size();
        long long val= m*1ll*k*1ll;
        if(val>n) return -1;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            mini= min(bloomDay[i],mini);
            maxi= max(bloomDay[i],maxi);
        }
        int low=mini, high=maxi;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(possible(bloomDay,mid,m,k)){
                high=mid-1;}
            else
            {
                low=mid+1;
            }
        }
        return low;
    }
};