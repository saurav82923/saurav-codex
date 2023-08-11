class Solution {
  public:
    int sumOfDependencies(vector<int> adj[], int V) {
        // code here
        unordered_map<int,int> m;
        for(int i=0; i<V; i++){
             for(auto j:adj[i])
                m[adj[i][j]]++;
            
        }
        int sum=0;
        for(auto i:m)
            sum=sum+i.second;
        return sum;
    }
};