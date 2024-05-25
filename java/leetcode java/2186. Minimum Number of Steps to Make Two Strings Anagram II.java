import java.util.*;
class Solution {
    public int minSteps(String s, String t) {
        Map<Character,Integer> m = new HashMap<>();
        Map<Character,Integer> m1 = new HashMap<>();
        for(int i=0;i<s.length();i++){
            char c= s.charAt(i);
            m.put(c,m.getOrDefault(c,0)+1);
        }
        int cnt=0;
        for(int i=0;i<t.length();i++){
            char c=t.charAt(i);
                m1.put(c,m1.getOrDefault(c,0)+1);
        }
        for(int i=0;i<26; i++){
            if(Math.abs(m.getOrDefault(((char)(i+'a')),0) - m1.getOrDefault(((char)(i+'a')),0))  != 0)
                cnt+= Math.abs(m.getOrDefault(((char)(i+'a')),0) - m1.getOrDefault(((char)(i+'a')),0));
        }
        return cnt;
    }
}