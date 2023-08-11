class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int ,int> m;
        int n=nums.size();
        for(int i=0 ; i<nums.size(); i++){
            m[nums[i]]++;
        }
        int a;;
        for(auto i: m){
            if(i.second > n/2)
                a= i.first;
        }
        return a;
    }
};