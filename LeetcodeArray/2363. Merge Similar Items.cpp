class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
       vector<vector<int>> ans;
        int n1=items1.size();
        int n2=items2.size();
        map<int,int> mp1;
       
        for(int i=0; i<n1; i++)
        {
            mp1[items1[i][0]]=items1[i][1];
        }
         for(int i=0; i<n2; i++)
        {
            mp1[items2[i][0]] += items2[i][1];
        }
        for(auto i:mp1)
        {
            ans.push_back({i.first, i.second});
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};