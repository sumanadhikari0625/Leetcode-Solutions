class Solution {
public:
    string convert(string s, int n){
        string ans;
        for(int i= 0; i<n; i++){
            if(isalnum(s[i])){
                ans.push_back(tolower(s[i]));
            }
        }
        return ans;
    }

    bool isPalindrome(string s) {
        int n= s.length();
        string ans= convert(s, n);
        // cout<<ans;
        for(int i= 0; i<ans.length()/2; i++){
            if(ans[i]!= ans[ans.length()-i-1]) return false;
        }
        return true;
    }
};