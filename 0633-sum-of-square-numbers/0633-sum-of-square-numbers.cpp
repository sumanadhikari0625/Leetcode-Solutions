class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c==1)
            return true;
        
        long long start=0, end= sqrt(c);

        while(start<=end)
        {
            if(start*start + end*end == (long long)(c))
                return true;

            else if(start*start + end*end < (long long)(c))
            {
                start++;
            }
            else{
                end--;
            }
        }
        return false;
    }
};