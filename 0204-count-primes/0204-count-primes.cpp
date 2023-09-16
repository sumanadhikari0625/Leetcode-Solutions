class Solution {
    public :
        int countPrimes(int n) {
        if(n<=1) return 0;
        vector<bool>s(n+1,true);
        s[0]=s[1]=false;
        int prime=0;
        for(int i=2;i<n;i++)
        {
            if(s[i])
            {
                prime++;
                for(int j=2*i;j<=n;j+=i)
                {
                    s[j]=false;
                }
            }
        }
        return prime;
    }
};