class Solution {
public:
    bool isAnagram(string s, string t) {
        int n= s.length(), m= t.length();
        if(!(n==m)) return false;
        map<char, int> mpp1;
        map<char, int> mpp2;
        for(auto it: s) mpp1[it]++;
        for(auto it: t) mpp2[it]++;
        if(mpp1==mpp2) return true;
        return false;

    }
};