class Solution {
public:
    int subtractProductAndSum(int n) {
                int a,p=1,s=0,result;
    while(n>0){
            
            a=n%10;
            p=p*a;
            s=s+a;
            n=n/10;
        
            
            
        }
        
        result=p-s;
        return result;
    }
        
    
};