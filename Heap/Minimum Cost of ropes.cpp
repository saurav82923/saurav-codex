{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
        priority_queue <long long> pq;
        for(long long i =0; i< n; i++){
            pq.push(-1*arr[i]);
        }
        long long ans=0;
        while(pq.size() > 1){
            long long p1=-1*pq.top();
            pq.pop();
             long long p2= -1*pq.top();
            pq.pop();
            ans=ans+p1+p2;
            pq.push(-1*(p1+p2));
        }
        return ans;
    }
};