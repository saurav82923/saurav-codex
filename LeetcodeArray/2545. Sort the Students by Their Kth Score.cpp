class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& s, int k) {
        map<int,vector<int>,greater<int>>mp;
			vector<vector<int>> ans;
			int m=s.size(),n=s[0].size();

			for(int r=0;r<m;r++) mp[s[r][k]]=s[r];

			for(auto i:mp) ans.push_back(i.second);
        return ans;
    }
};