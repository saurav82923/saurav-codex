class Solution {
public:
    bool validPalindrome(string s) {
        int cnt =0,cnt1=0;
        int ss=0,e=s.length()-1,size=s.length()/2 -1;
        while(ss<e){
            if(s[ss] == s[e]){
                ss++;
                e--;

            }
            else {
                cnt++;
                e--;
            }
           
        }
        ss=0,e=s.length()-1;
        while(ss<e){
            if(s[ss] == s[e]){
                ss++;
                e--;

            }
            else {
                cnt1++;
                ss++;
            }
           
        }
        if(cnt==0 || cnt1==0){
            return true;
        }
        if(cnt==1 || cnt1==1){
            return true;
        }
        return false;
    }
};