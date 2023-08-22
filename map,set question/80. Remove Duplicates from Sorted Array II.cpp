class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> map;
        int newindex=0;
        
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
            
            if(map[nums[i]]<=2)
                nums[newindex++]=nums[i];
        }
        return newindex;
    }
};