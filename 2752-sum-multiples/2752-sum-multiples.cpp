class Solution {
public:
    int sumOfMultiples(int n) {
        int num=0;
        int n1=0;
        for(int i=1;i<=n;i++)
        {
            if(i%3==0 || i%5 ==0 ||i%7==0){
                num+= i;
                cout<<num<<" ";
            }
        }
        return num;
    }
};