class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m1,m2;
        for(auto i: nums1)
            m1[i]=true;
        for(auto i: nums2)
            m2[i]=true;
        vector<vector<int>> ans;
       
            vector<int> v;
            for(auto a:m1){
                if(m2.find(a.first) == m2.end())
                    v.push_back(a.first);
            }
            ans.push_back(v);
            vector<int> v1;
            for(auto b:m2){
                if(m1.find(b.first) == m1.end())
                    v1.push_back(b.first);
            }
            ans.push_back(v1);
        
        return ans;
    }
};