class Solution {
public:
    int minMoves2(vector<int>& nums) {
         sort(nums.begin(),nums.end());
        int mid = nums.size() / 2;
        int sum = 0;
        
        for(auto i : nums){
            sum = sum+ abs(i - nums[mid]);
        }
        return sum;
    }
};