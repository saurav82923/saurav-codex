class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int index = find(nums.begin(),nums.end(),target)-nums.begin();
        vector<int> v;
        if(index != nums.size())
         v.push_back(index);
        // cout<<index;
        for(int i= index+1; i<nums.size(); i++){
            if(nums[i] == target)
                v.push_back(i);
        }
        return v;

    }
};