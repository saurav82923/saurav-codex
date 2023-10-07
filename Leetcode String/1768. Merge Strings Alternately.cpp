class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int a=word1.length();
        string ans;
        int b= word2.length();
        int i=0,j=0;
        while(i< a || j<b){
            if(i<a)
            ans.push_back(word1[i]);
            if(j<b)
            ans.push_back(word2[j]);
            i++;
            j++;
        }
        return ans;
    }
};              