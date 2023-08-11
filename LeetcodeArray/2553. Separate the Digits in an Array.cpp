class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> v;
        for(auto &i:nums){
            string s=to_string(i);
            for(auto &j:s){
                
                    v.push_back(j- '0');
            }
        }
        return v;
    }
};