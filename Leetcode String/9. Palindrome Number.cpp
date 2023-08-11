class Solution {
public:
    bool isPalindrome(int x) {
       string s="" ;
       s=to_string(x);
       string s1=s;
       reverse(s.begin(),s.end());
       if(s== s1)
        return true;
        return false;
    }
};