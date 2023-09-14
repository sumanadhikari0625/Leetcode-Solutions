class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0) return false;
        double log1= log2(n)/log2(4);
        //cout<<log1;
        if(ceil(log1)==floor(log1)) return true;
        else return false;
    }
};