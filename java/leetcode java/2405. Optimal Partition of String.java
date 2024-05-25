class Solution {
    public int partitionString(String s) {
       Map<Character,Integer> m= new HashMap<>();
       int maxi=1;
       for(int i=0; i<s.length();i++) {
            if(m.containsKey(s.charAt(i))){
                maxi++;
                m.clear();
            }

            m.put(s.charAt(i) , m.getOrDefault(s.charAt(i),0)+1);
       }
    //    for(Map.Entry<Character,Integer> i: m.entrySet()){
    //         maxi = Math.max(i.getValue(),maxi);
    //    }
       return maxi;
    }
}