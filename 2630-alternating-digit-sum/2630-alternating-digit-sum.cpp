class Solution {
public:
    int alternateDigitSum(int n) {
        string s;
        s= to_string(n);
        int sum=0;
        for(int i=0;i<s.length();i++)
        {
            if(i&1) sum-= s[i]-48;
            else sum+= s[i]-48;
        }
        return sum;
    }
};