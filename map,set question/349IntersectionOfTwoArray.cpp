class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
         unordered_set<int> s;
        for(int i=0;i<nums1.size();i++)
            s.insert(nums1[i]);
        for(int j=0;j<nums2.size();j++){
            int key=nums2[j];
            if(s.find(key)!=s.end()){
                v.push_back(key);
                s.erase(key);
            }
        }
        return v;
    }
};