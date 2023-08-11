class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int value;
        for(int i=0; i<nums.size(); i++){
            if(count(nums.begin(),nums.end(),original)){
                original=original*2;
            }
        }
        return original;
    }
};