class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
       
        unordered_map<int,int> m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        int s=0;
        for(auto i:m)
            if(i.second == 1)
                s=s+ i.first;
        return s;
    }
};