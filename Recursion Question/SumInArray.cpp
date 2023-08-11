class Solution {
public:
   int solve(vector<int>&nums,int i){
       if(i==0){
           return nums[i];
       }
       if(i==1){
           return nums[0]+nums[i];
       }
       return nums[i]+solve(nums,i-1);
   }
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(solve(nums,i));
        }
        return ans;
    }
};