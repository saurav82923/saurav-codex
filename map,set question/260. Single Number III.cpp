class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
         map<int,int>m;
        for(auto x:nums)
            m[x]++;
        vector<int>res;
        for(auto x:nums){
            if(m[x]==1)
                res.push_back(x);
        }
        return res;
    }
};