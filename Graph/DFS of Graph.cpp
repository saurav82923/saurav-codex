class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(vector<int> adj[],unordered_map<int,bool> &m,vector<int> &ans,int i){
        ans.push_back(i);
        m[i]=true;
        for(auto j:adj[i]){
            if(!m[j])
                dfs(adj,m,ans,j);
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
       vector<int> ans;
       unordered_map<int,bool> m;
       dfs(adj,m,ans,0);
       return ans;
    }
};