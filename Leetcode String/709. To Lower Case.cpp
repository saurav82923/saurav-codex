class Solution {
public:
    string toLowerCase(string s) {
        int a=65;
        int b=97;
        unordered_map<int,int> m;
        for(int i=0; i<26; i++){
            m[a]=b;
            a++;
            b++;
        }
        for(int i=0; i<s.length(); i++){
            if(s[i] <=90 && s[i]>=65)
                s[i]=m[s[i]];
        }
        return s;
    }
};