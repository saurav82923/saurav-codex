class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int cnt=0;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size();j++){
                if(nums[j]-nums[i] == k)
                    cnt++;
            }
        }
        return cnt;
    }
};