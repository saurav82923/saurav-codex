class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> v;
        int row = grid.size();
        int col = grid[0].size();
        int total = row * col;
        int n=1;
        unordered_map<int,int> m;
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                m[grid[i][j]]++;
                if(n<= total)
                    m[n++]++;
            }
        }
        for(auto i: m){
                 if(i.second == 3)
                v.push_back(i.first);
        }
        for(auto i: m)
           if(i.second == 1)
                v.push_back(i.first);
        return v;
    }
};