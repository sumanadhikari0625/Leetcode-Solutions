class Solution {
public:
    unordered_map<char,int>mpp{{'{',-1},{'(',-2},{'[',-3},{'}',1},{')',2},{']',3}};
    bool isValid(string s) {
        // int sum=0;
        // for(int i=0;i<s.length();i++)
        // {
        //     sum+= mpp[s[i]];
        // }
        // if(sum!=0) return false;
        // return true;
        stack<char>st;
        for(auto bracket:s)
        {
            if(mpp[bracket]<0) st.push(bracket);
            else
            {
                if(st.empty()) return false;
                char top= st.top();
                st.pop();
                if(mpp[top]+mpp[bracket]!=0) { return false;}
            }
        }
        if(st.empty()) return true;
        else return false;

    }
};