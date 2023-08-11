class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    void bfs(int node,vector<int> adj[],vector<int> &ans,unordered_map<int,bool> &visited){
        queue<int> q;
        q.push(node);
        visited[node]=1;
        while(!q.empty()){
            int front=q.front();
            q.pop();
            ans.push_back(front);
            for(auto neighbour:adj[front]){
                if(!visited[neighbour]){
                    q.push(neighbour);
                    visited[neighbour]=1;
                }
            }
        }
    }
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans;
        unordered_map<int,bool> visited;
        bfs(0,adj,ans,visited);
        return ans;
    }
};