class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string example="";
        string example2="";

        for(int i=0; i<word1.size(); i++){
            example = example + word1[i];
        }
         for(int i=0; i<word2.size(); i++){
            example2 = example2 + word2[i];
        }
        if(example == example2)
            return true;
        else 
            return false;
    }
};