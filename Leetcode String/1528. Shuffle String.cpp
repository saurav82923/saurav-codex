class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ss;
       map<int,char> m;
        for(int i =0; i<indices.size(); i++){
            m[indices[i]] = s[i];
        }
        for(auto i:m){
            ss = ss + i.second;
        }
        return ss;
    }
};