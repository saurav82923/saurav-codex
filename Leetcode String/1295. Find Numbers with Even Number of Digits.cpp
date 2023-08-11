class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt=0;
        string s="";
        for(auto i:nums){
         s= to_string(i);
            if(s.length()%2 == 0)
                cnt++;
        }
        return  cnt;
    }
};