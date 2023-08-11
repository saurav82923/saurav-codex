class Solution {
public:
    int minSteps(string s, string t) {
        int count=0;
        unordered_map<char,int> m,m1;
        for(auto i:s)
            m[i]++;
        for(auto i:t)
            m1[i]++;
        for(int i=0; i<26; i++){
            if(abs(m[i + 'a'] - m1[i+'a']) != 0)
                count = count + abs(m[i + 'a'] - m1[i+'a']);
        }
        return count;
    }
};