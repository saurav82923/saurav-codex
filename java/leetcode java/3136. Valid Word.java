public class Solution {
    public boolean isValid(String s) {
       if(s.length() <3) 
        return false;
        boolean a=false;
        boolean b= false;
        int c;
        for(int i=0; i<s.length(); i++){
            if(! (Character.isLetter(s.charAt(i)) || Character.isDigit(s.charAt(i))))
                return false;
           else  if(s.charAt(i) == 'a' || s.charAt(i) == 'e' ||s.charAt(i) == 'i' ||s.charAt(i) == 'o' ||s.charAt(i) == 'u')
                a=true;
            else if(s.charAt(i) == 'A' || s.charAt(i) == 'E' ||s.charAt(i) == 'I' ||s.charAt(i) == 'O' ||s.charAt(i) == 'U')
                a=true;
            else if(s.charAt(i) >= '0' && s.charAt(i) <= '9' )
                c=1;
            else 
                b=true;
        }
        if(a && b)
            return true;
        return false;
    }
} {
    
}
