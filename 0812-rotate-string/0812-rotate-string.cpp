class Solution {
public:
    bool rotateString(string s, string goal) {
        int s1=s.length();
        int s2=goal.length();
        string s3;
        if(s1!=s2) return false;

        s3= s+s;
        cout<<s3;
        bool f = s3.find(goal) != string::npos;

        if(f) return true;
        else return false;
    }
};