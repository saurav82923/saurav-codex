class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	void top(int node,stack<int> &s,vector<bool> &visited,vector<int> adj[]){
	    visited[node]=1;
	    for(auto neighbour:adj[node]){
	        if(!visited[neighbour])
	            top(neighbour,s,visited,adj);
	    }
	    s.push(node);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> ans;
	    vector<bool> visited(V);
	    stack<int> s;
	    for(int i=0;i<V; i++)
	        if(!visited[i])
	           top(i,s,visited,adj);
	    while(!s.empty()){
	        ans.push_back(s.top());
	        s.pop();
	    }
	    return ans;
	    
	}
};