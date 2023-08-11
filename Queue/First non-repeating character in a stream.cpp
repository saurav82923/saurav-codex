class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    string s="";
		    queue<char > q;
		    unordered_map<char,int> m;
		    for(int i =0; i<A.length(); i++){
		        m[A[i]]++;
		        q.push(A[i]);
		        while(!q.empty()){
		            if(m[q.front()] > 1)
		                q.pop();
	                else{
	                    s.push_back(q.front());
	                    break;
	                }
		        }
		        if(q.empty())
		            s.push_back('#');
		    }
		    return s;
		}

};