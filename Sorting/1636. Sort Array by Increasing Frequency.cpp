class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
       map<int,int> mp;
        map<int,vector<int> > mp2;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        for(auto x: mp)
            mp2[x.second].push_back(x.first);
        vector<int> ans;
        for(auto x: mp2) {
            cout<<x.second.size()<<endl;
            for(int i=x.second.size()-1;i>=0;i--) {
                int h = x.first;
                while(h--)
                    ans.push_back(x.second[i]);
            }
        }
        return ans;

    }
};