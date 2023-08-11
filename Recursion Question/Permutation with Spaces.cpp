class Solution{
public:
    void spaces(vector<string> &ans,string s,int index,string output){
        output.push_back(s[index]);
        if(index>=s.length()-1){
            ans.push_back(output);
            return ;
        }
        // exclude
        spaces(ans,s,index+1,output);
        // include
        output.push_back(' ');
        spaces(ans,s,index+1,output);
    }
    vector<string> permutation(string S){
        // Code Here
        vector<string> ans;
        int index=0;
        string output="";
        spaces(ans,S,index,output);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};