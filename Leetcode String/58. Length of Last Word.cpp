class Solution {
public:
    int lengthOfLastWord(string s) {
      int s1=s.length()  ;
      int length=0;
      for(int i=s1-1; i>=0; i--){
          if(s[i] != ' ')
            length++;
        else if(length>0)
            return length;
      }
      return length;
    }
};