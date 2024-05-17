import java.util.HashMap;
import java.util.Map;

public class Solution {
    public int minimumOperationsToMakeKPeriodic(String s, int k) {
        int n = s.length();
        Map<String, Integer> substringFrequency = new HashMap<>();
        int maxFreq = 0;
        int totalCount = 0;

        // Loop over the string with step `k` to get all substrings of length `k`
        for (int i = 0; i < n; i += k) {
            String t = s.substring(i, Math.min(i + k, n));  // Ensure substring doesn't exceed bounds
            substringFrequency.put(t, substringFrequency.getOrDefault(t, 0) + 1);
            maxFreq = Math.max(maxFreq, substringFrequency.get(t));
            totalCount++;
        }

        // Minimum operations needed to make the string k-periodic
        return totalCount - maxFreq;
    }
}





class Solution {
    public int minimumOperationsToMakeKPeriodic(String word, int k) {
       int n= word.length() ;
       String s= "";
       Map<String,Integer> m= new HashMap<>();
       for(int i=0; i<n; i++){
        s=s + word.charAt(i);
        if(s.length()== k){
            m.put(s,m.getOrDefault(s,0)+1);
            s="";
        }
       }
       int maxi=0;
       for(Map.Entry<String,Integer> entry:m.entrySet()){
        maxi=Math.max(maxi,entry.getValue());
       }
       return n/k-maxi;
    }
}