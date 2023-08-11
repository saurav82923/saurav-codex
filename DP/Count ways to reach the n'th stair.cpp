class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int solve(int nstairs,vector< int> &dp){
        if( nstairs == 0)
            return 1;
        if( nstairs < 0)
            return 0;
        if(dp[nstairs] != -1)
            return dp[nstairs];
        dp[nstairs] = (solve(nstairs-1,dp) +solve(nstairs-2,dp))%1000000007;
        return dp[nstairs];
    }
    int countWays(int n)
    {
        // your code here
        vector< int> dp(n+1);
        for(int i =0; i<=n; i++)
            dp[i]=-1;
        int ans = solve(n,dp);
        return ans;
    }
};