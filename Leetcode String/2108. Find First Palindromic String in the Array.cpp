class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ss="";
        for(int i=0; i<words.size(); i++){
            string s2=words[i];
            reverse(words[i].begin(),words[i].end());
            if(s2 == words[i]){
                ss = ss +s2;
                break;
            }
        }
        return ss;
    }
};