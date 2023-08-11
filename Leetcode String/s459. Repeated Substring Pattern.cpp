class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        //double the string and remove first and last characters of the new string
        string str=s+s;
        str.pop_back();
        str.erase(str.begin());
        // check for substring s in the new string we made 
        return str.find(s) != string::npos;
    }
};