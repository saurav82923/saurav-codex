class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int> himeshRasemiaLonelySong;
        unordered_map<int,int> m;
        set<int> s;
        for(auto i:nums){
            s.insert(i);
            m[i]++;
        }
        for(int i=0; i<nums.size(); i++){
            if( m[nums[i]] == 1 && s.find(nums[i]-1) == s.end() && s.find(nums[i]+1) == s.end()){
                himeshRasemiaLonelySong.push_back(nums[i]);
            }
        }
        return himeshRasemiaLonelySong;
    }
};