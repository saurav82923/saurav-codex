class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // for(int i=0;i<k;i++){
        //     rotate(nums.begin(),nums.begin()+1,nums.end());
        // }
        // rotate(nums.begin(),nums.begin()+k,nums.end());
        vector<int > temp(nums.size());
        for(int i=0;i<nums.size();i++){
            temp[(i+k)%nums.size()]=nums[i];
        }
        // for(int i=0;i<nums.size();i++){
        //     nums[i]=temp[i];
        // }
//         or
        nums=temp;
    }
};