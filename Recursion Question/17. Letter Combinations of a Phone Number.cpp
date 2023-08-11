class Solution {
public:
    void solve(string digit,string output,int index,vector<string> &ans,string mapp[]){
        if(index >= digit.length()){
            ans.push_back(output);
            return ;
        }
        int no= digit[index]-'0';
        string s=mapp[no];
        for(int i=0; i<s.length(); i++){
            output.push_back(s[i]);
            solve(digit,output,index+1,ans,mapp);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length() <= 0)    return ans;
        string output="";
        string mapp[10] ={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,output,0, ans,mapp);
        return ans;
    }
};