class Solution {
  public:
  bool top(int node,int parent,vector<bool> &visited,vector<int> adj[]){
	    visited[node]=1;
	    for(auto neighbour:adj[node]){
	        if(!visited[neighbour]){
	            bool a= top(neighbour,node,visited,adj);
	            if(a)
	                return true;
	        }
	            
            else if(neighbour != parent)
	           return true;
	    }
	    return false;
	}
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<bool> visited(V);
        for(int i=0;i<V; i++)
	        if(!visited[i])
	         if( top(i,-1,visited,adj) == 1)
	         return true;
          return false;
    }
};