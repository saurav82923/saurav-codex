#include<bits/stdc++.h>
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum=sum+nums[i];
        }
       vector<int> v;
       for(int i=0; i<nums.size(); i++){
           if(nums[i]>=10){
               while(nums[i]!=0){
                   v.push_back(nums[i]%10);
                   nums[i]=nums[i]/10;
               }
           }
           else
            v.push_back(nums[i]);
       }
       int sum1=0;
       for(int i=0; i<v.size(); i++){
            sum1=sum1+v[i];
        }
        return abs(sum-sum1);
    }
};