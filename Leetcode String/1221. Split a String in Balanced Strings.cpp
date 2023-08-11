class Solution {
public:
    int balancedStringSplit(string s) {
        
        int cnt=0;
        int countL=0;
        int countR=0;
        int i=0;
        while(  i < s.length()){
            if(s[i] == 'R')
                countR++;
            else
                countL++;
            if(countL == countR)
                cnt++;
        i++;    
        }
        return cnt;
        
    }
};