class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32>bits(n);
        string str= bits.to_string();
        reverse(str.begin(),str.end());
        bitset<32>b2(str);
        return b2.to_ullong();
    }
};