class Solution {
  public:
  long long int fib(long long int n, vector<long long int> &dp){
      if(n<=1)
        return n;
      
      if(dp[n] != -1)
        return dp[n];
    
    dp[n] = (fib(n-1,dp) + fib(n-2,dp))%1000000007;
    return dp[n];
      
  }
    long long int nthFibonacci(long long int n){
        // code here
        vector<long long int> dp(n+1);
        for(int i =0; i<=n; i++)
            dp[i]=-1;
        return fib(n,dp);
    }
};