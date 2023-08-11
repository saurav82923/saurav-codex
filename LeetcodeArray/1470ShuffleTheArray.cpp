class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v;
        int a=n;
        for(int i=0;i<a;i++){
            v.push_back(nums[i]);
            v.push_back(nums[n]);
            n++;
        }
        return v;
    }
};