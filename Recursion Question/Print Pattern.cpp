class Solution{
public:
void solve(int N,vector<int>& v){
    if(N<=0){
       v.push_back(N);
        return;
    }
        v.push_back(N);
     solve(N-5,v);
    v.push_back(N);
    
}
    vector<int> pattern(int N){
        // code here
        vector<int > v;
        solve(N,v);
        
        return v;
    }
};