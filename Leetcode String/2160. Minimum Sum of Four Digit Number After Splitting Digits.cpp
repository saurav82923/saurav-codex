class Solution {
public:
    int minimumSum(int num) {
        
   string s=to_string(num);
        sort(s.begin(),s.end());
        string s1 = "";
        string s2 = "";
        s1 = s1 + s[0];
         s1 = s1 + s[3];
         s2 = s2 + s[1]; 
        s2 = s2 + s[2];
        int n = stoi(s1) + stoi(s2);
        return n;
    }
};