class Solution {
public:
    bool digitCount(string num) {
        //bool flag=true;
        for(int i=0;i<num.length();i++)
        {
            int count=0;
            for(int j=0;j<num.length();j++)
            {
                if(i==(int)num[j]-48)
                {count++;}
            }
            cout<<count;
            if((int)num[i]-48!=count)
            {return false;}
        }
        return true;
    }
};