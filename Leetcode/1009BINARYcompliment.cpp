class Solution {
public:
    int bitwiseComplement(int n) {
        int ans=0,i=0;
        if(n==0)
            return 1;
        while(n>0){
            if(!(n&1))
                ans=ans+pow(2,i);
            i++;
            n=n>>1;
            
        }
        return ans;
        
    }
};