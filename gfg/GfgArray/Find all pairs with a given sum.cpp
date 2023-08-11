class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        // Your code goes here   
        vector<pair<int,int>> v;
        for(int i=0;i<N;i++){
            pair<int,int> p;
            for(int j=0;j<M;j++){
                if(A[i]+B[j]==X){
                    p={A[i],B[j]};
                    v.push_back(p);
                }
            }
        }
        sort(v.begin(),v.end());
        return v;
        
    }
};
