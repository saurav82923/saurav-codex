class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
         int mini=INT_MAX;
         sort(nums.begin(),nums.end());
         int cnt=0;
         int n=nums.size();
         for(int i=0; i<n; i++){
             if(mini == INT_MAX){
                 cnt++;
                 mini=nums[i];

             }
             else{
                 if(nums[i]-mini > k){
                     cnt++;
                     mini=nums[i];
                 }
             }
         }
         return cnt;
    }
};