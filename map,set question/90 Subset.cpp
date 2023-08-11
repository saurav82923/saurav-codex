class Solution {
public:
        void solve(vector<int> &nums,vector<int> output,int index,set<vector<int>> &ans){
        if(index>=nums.size()){
            ans.insert(output);
            return;
        }
        // #exclude
        solve(nums,output,index+1,ans);
        // #include
        int element=nums[index];
        output.push_back(element);
        solve(nums,output,index+1,ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
           set<vector<int>> ans;
        vector<vector<int>> final;
        vector<int> output;
        int index=0;
        solve(nums,output,index,ans);
        for(auto i:ans){
            final.push_back(i);
        }
        return final;
    }
};