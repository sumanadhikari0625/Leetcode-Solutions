class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>even;
        vector<int>odd;
        int n=nums.size();
        for(int i=0;i<nums.size();i+=2)
        {
            even.push_back(nums[i]);
        }
        sort(even.begin(),even.end());
        //for(auto it:even) cout<<it<<" "<<endl;
        for(int i=1;i<nums.size();i+=2)
        {
            odd.push_back(nums[i]);
        }
        sort(odd.begin(),odd.end(),greater<int>());
        //for(auto it:odd) cout<<it<<" ";
        int j=0,k=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0) 
            {
                nums[i]=even[j];
                j++;
            }
            else {
                nums[i]=odd[k];
                k++;
            }
        }
        return nums;
    }
};