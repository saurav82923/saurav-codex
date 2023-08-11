class Solution {
  public:
  long long int even(long long int n,int index){
      if(index>n)
        return index/2;
    index=index*2;
    return even(n,index);
      
  }
    long long int nthPosition(long long int n){
        // code here
        long long int a;
        int size=n;
        a=even(n,1);
        return a;
    }
};