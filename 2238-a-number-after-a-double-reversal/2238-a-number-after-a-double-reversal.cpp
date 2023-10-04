class Solution {
public:
    bool isSameAfterReversals(int num) {
        int n=num;
        int rev=0;
        while(n>0)
        {
            rev=rev*10+(n%10);
            n=n/10;
        }
        //cout<<rev<<endl;
        int rev1=0;
        while(rev>0)
        {
            rev1=rev1*10+(rev%10);
            rev=rev/10;
        }
        //cout<<num<<" "<<rev1<<" "<<rev;
        if(rev1==num)
        return true;
        else return false;
        
    }
};