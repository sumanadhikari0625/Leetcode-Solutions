class Solution {
public:
    int pivotInteger(int n) {
        int ans=0;
        int sum=0;
        if(n==1) return 1;
        sum= n*(n+1)/2;
        for(int i=1;i<n;i++)
        {
            ans+=i;
            if(ans==sum) return i;
            sum-=i;
        }
        return -1;
    }
};