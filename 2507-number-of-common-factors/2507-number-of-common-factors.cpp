class Solution {
public:
    int commonFactors(int a, int b) {
        int c=0;
        for(int i=1;i<=b;i++)
        {
            if(b%i==0 && a%i==0) c++;
            //cout<<c;}
        }
        return c;
    }
};