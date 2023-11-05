class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto a1= lower_bound(nums.begin(),nums.end(),target);
        if(a1 == nums.end() ||*a1 != target )
            return {-1,-1};
        auto a2= upper_bound(nums.begin(),nums.end(),target);
        int x=a1-nums.begin();
        int y=a2-nums.begin();
            return {x,y-1};
    }
};