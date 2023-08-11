class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int> m;
        for(int i=0; i<edges.size(); i++){
            for(int j=0; j<edges[i].size(); j++){
                m[edges[i][j]]++;
            }
        }
        int maxi=INT_MIN;
        int count=0;
        int ele;
        for(auto i:m){
            count=i.second;
            if(count > maxi){
                maxi=count;
                ele = i.first;
            }
        }
        return ele;
    }
};