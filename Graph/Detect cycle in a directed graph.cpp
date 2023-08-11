class Solution {
  public:
  bool top(int node,vector<bool> &dfsvisited,vector<bool> &visited,vector<int> adj[]){
	    visited[node]=1;
	    dfsvisited[node]=1;
	    for(auto neighbour:adj[node]){
	        if(!visited[neighbour]){
	            bool a= top(neighbour,dfsvisited,visited,adj);
	            if(a)
	                return true;
	        }
	            
            else if(dfsvisited[neighbour])
	           return true;
	    }
	    dfsvisited[node]= false;
	    return false;
	}
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<bool> visited(V);
        vector<bool> dfsvisited(V);
        for(int i=0;i<V; i++)
	        if(!visited[i])
	         if( top(i,dfsvisited,visited,adj) == 1)
	         return true;
          return false;
    }
};