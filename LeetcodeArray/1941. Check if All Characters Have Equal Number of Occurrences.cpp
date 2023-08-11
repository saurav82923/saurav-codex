class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> v;
        map<char,int> m;
        for(int i=0; i<s.length(); i++){
            m[s[i]]++;
        }
        for(auto it:m){
            v.push_back(it.second);
        }
        for(int i=0;i+1<v.size();i++){
            if(v[i]!=v[i+1])
                return false;
        }
        return true;
    }
};