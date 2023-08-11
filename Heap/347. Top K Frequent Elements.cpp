class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(auto i:nums)
            m[i]++;
        vector<int> v;
        priority_queue<pair<int,int> > q;
        for(auto i:m){
            q.push({i.second,i.first});
        }
        for(int i=0; i<k; i++){
            v.push_back(q.top().second);
            q.pop();
        }
        return v;
    }
};