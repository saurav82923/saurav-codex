class Solution {
public:
void solve(vector<int> nums,set<vector<int>> &ans,int index){
        if(index>= nums.size()){
            ans.insert(nums);
            return ;
        }
        for(int j=index;j<nums.size();j++){
            swap(nums[index],nums[j]);
            solve(nums,ans,index+1);
            swap(nums[index],nums[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> ans;
        int index=0;
        solve(nums,ans,index);
        vector<vector<int>> ans1;
        for(auto i:ans){
            ans1.push_back(i);
        }
        return ans1;
    }
};