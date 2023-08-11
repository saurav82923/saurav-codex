class Solution {
public:
    bool digitCount(string num) {
        unordered_map<char,int> m;
        for(auto i:num){
            m[i-'0']++;
        }
        for(int i=0; i<num.length(); i++){
            if(num[i]-'0' != m[i])
                return false;
        }
        return true;
    }
};