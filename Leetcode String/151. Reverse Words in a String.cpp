class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string temp="";
        for(int i=s.length()-1; i>=0; i--){
            if(s[i]== ' ' && temp.length()!= 0){
                reverse(temp.begin(),temp.end());
                ans=ans+temp;
                ans.push_back(' ');
                temp="";
            }
            else if(s[i] != ' ')
                temp.push_back(s[i]);
        }
         reverse(temp.begin(),temp.end());
                ans=ans+temp;
            if(ans[ans.length()-1] == ' ')
                ans.pop_back();
                return ans;
    }
};