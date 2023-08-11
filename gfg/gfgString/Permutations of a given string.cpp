class Solution
{
	public:
	void solve(string &S,vector<string> &v,int index){
	    if(index>= S.length()){
	        v.push_back(S);
	        return;
	    }
	    for(int j=index;j<S.length();j++){
	        swap(S[index],S[j]);
	        solve(S,v,index+1);
	        swap(S[index],S[j]);
	    }
	}
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string> v,v1;
		    set<string> s;
		    int index=0;
		    solve(S,v,index);
		    sort(v.begin(),v.end());
		    for(int i=0;i<v.size();i++){
		        s.insert(v[i]);
		    }
		    for(auto i:s){
		        v1.push_back(i);
		    }
		    return v1;
		}
};
