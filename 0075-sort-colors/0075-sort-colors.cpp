class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int a=0,b=0,c=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            a++;
            else if(nums[i]==1) b++;
            else c++;
        }
        //cout<<a<<" "<<b<<" "<<c;
        for(int i=0;i<n;i++)
        {
           if(i<a) nums[i]= 0;
           else if(i<a+b) nums[i]=1;
           else nums[i]=2;
        }
        return;

    }
};