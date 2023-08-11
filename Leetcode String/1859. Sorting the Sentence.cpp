class Solution {
public:
    string sortSentence(string s) {
        string temp;
        string res;
        map<int, string> m;
        for(int i=0;i<s.size();i++){
            if((!isdigit(s[i])) && s[i]!=' '){
                temp+=s[i];
            }
            if(isdigit(s[i])){
                int t = s[i]-'0';
                m[t]=temp;
                temp="";
            }
        }
        for(auto it: m){
            res+=it.second;
            res+=' ';
        }
        res.pop_back();
        return res;
    }
};