class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        unordered_map<int,int> m;
        for(auto i:nums)
            m[i]++;
        int maxi=INT_MIN;
        for(auto i:m)
            maxi=max(i.second,maxi);
        for(int i=0; i<maxi; i++){
            vector<int> v;
            for(auto j : m){
                if(j.second > 0 ){
                    v.push_back(j.first);
                    m[j.first]--;
                }
            }
             ans.push_back(v);
        }
        return ans;
    }
};