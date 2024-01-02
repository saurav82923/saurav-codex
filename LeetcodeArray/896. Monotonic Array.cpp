class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int> v=nums;
        vector<int> v1=nums;
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        reverse(v1.begin(),v1.end());
        if(v==nums || v1 == nums)
            return true;
        return false;
        
      }
};