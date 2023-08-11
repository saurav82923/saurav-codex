class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int size = nums.size();
        int xo=0;
        
      
        for(int i=0; i<size ; i++){
           xo = xo ^ nums[i] ^ i;
        }
        return xo^size;
        
        
    }
};