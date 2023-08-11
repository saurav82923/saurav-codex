class Solution{
    public:
    //You need to complete this fucntion
    long long powe(int n,int r){
    if(r==1)
        return n;
        if(r%2==0){
            long long a=powe(n,r/2);
            return (a*a)%1000000007;
        }
        else
           return (n*powe(n,r-1))%1000000007;
    }
    
    long long power(int N,int R)
    {
       //Your code here
       return powe(N,R);
        
    }

};