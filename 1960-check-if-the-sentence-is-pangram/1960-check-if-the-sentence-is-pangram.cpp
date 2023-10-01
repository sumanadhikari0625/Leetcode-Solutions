class Solution {
public:
    bool checkIfPangram(string sentence) {
       int n=sentence.length();
       map<char,int>mpp;
       for(auto it:sentence) mpp[it]++;
       if(mpp.size()==26) return true;
       else return false;
    }
};