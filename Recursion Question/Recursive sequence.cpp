class Solution{
public:
    long long solve(int n,int a,int b){
        if(n==0){
            return 0;
        }
        long long p=1;
        for(int i=a;i<a+b;i++){
            p=p*i;
        }
        return p+solve(n-1,a+b,b+1);
    }
    long long sequence(int N){
        // code here
        return solve(N,1,1);
    }
};