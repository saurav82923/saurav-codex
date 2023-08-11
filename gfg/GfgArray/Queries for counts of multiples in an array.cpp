vector<int> countMultiples(int A[], int Q[], int N, int M) {
    // Your code goes here  
    vector<int>v;
    map<int , int > m;
    for(int j=0;j<M;j++){
        for(int i=0;i<N;i++){
            if(A[i]%Q[j]==0){
                m[Q[j]]++;
            }
        }
    }
    for(auto i:m){
        v.push_back(i.second);
    }
    return v;
}