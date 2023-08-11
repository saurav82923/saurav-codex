class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i=0,power;
        for(i=0;i<=30;i++){
            power=pow(2,i);
            if(power==n){
                return true;
                
            }
            
            }
        return false;
    }
};