class Solution {
public:
    string reverseWords(string s) {
        string s1,ans;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=' ') s1+= s[i];
            else
            {
                reverse(s1.begin(),s1.end());
                ans+= s1+" ";
                s1="";
            }
        }
        reverse(s1.begin(),s1.end());
        ans+= s1;
        return ans;
    }
};