class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> v;
        set<int> s;
        for(auto i:nums[0])
            s.insert(i);    
        for(int i=1; i<nums.size(); i++){
            set<int> ss;
            for(int j=0; j<nums[i].size(); j++){
                if(s.find(nums[i][j]) != s.end())
                     ss.insert(nums[i][j]);
            }
            s=ss;
        }
        for(auto i:s)
            v.push_back(i);
        return v;
    }
};