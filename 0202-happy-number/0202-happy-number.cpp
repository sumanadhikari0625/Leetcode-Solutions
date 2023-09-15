class Solution {
public:
    int helper(int n)
    {
        int sum=0;
        while(n!=0)
        {
            int rem=n%10;
            sum+= rem*rem;
            n=n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        //int num;
        if(n==1 || n==7)
        return true;
        map<int,int>mpp;
        int sum=n;
        while(true)
        {
            if(sum==1 || sum==7) return true;
            else if(mpp[sum]) break;
            else mpp[sum]++;
            sum= helper(sum);
        }
        return false;
    }
};