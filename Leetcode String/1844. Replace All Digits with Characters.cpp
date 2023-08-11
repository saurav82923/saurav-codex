class Solution {
    
public:
    
    string replaceDigits(string s) {
        for(int i=1; i < s.size(); i+=2){
            char c = s[i-1];
            int inc = s[i] - '0';
            for(int i=0; i < inc; i++){
                c++;
            }
            s[i] = c;
        }
        return s;
    }
};