class Solution {
public:
    string finalString(string s) {
        string ans;
        for(int i=0;i<s.length();i++){
            if(s[i]!='i')ans.push_back(s[i]);
            else
            reverse(ans.begin(),ans.end());
            }
            return ans;
    }
};