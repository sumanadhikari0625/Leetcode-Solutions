class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>v;
        int div=0;
        for(int i=left;i<=right;i++)
        {
            int n=i;
            bool flag=false;
            while(n>0)
            {
                div=n%10;
                if(div!=0 && i%div==0) {flag=true;}
                else{flag=false;
                    break;}
                n=n/10;
            }
            if(flag==true){v.push_back(i);}
        }
        return v;
    }
};