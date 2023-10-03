#include<bits/stdc++.h>
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int i=0;int n= nums.size(); int c=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j]){ 
                    // cout<< i<< " "<< j<<endl;
                    c++;
                }
            }
        }
        return c;
        
    }
};