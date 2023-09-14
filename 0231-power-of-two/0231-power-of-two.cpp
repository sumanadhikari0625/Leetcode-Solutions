class Solution {
public:
    bool isPowerOfTwo(int n) {
        string str;
        if(n==INT_MIN) return false;
        int count=0;
        str= bitset<32>(n).to_string();
        for(int i=0;i<32;i++)
        {
            if(str[i]=='1') count++;
        }
        if(count==1) return true;
        else
        return false;
    }
};