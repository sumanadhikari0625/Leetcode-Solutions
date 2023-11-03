class Solution {
public:
    bool isPerfectSquare(int num) {
        long long low=1,high=num;
        while(low<=high)
        {
            long long mid=(high+low)/2;
            long long val= mid*mid;

            if(val==num)
                return true;
            else if(val<num)
            {
                low= mid+1;
            }
            else
            {
                high= mid-1;
            }
        }
        return false;
    }
};