class Solution {
public:
    string reversePrefix(string word, char ch) {
        int a = word.find(ch);
        reverse(word.begin(), word.begin()+a+1);
        return word;
    }
};