class Solution {
    public int minAddToMakeValid(String s) {
    Stack<Character> st=new Stack<>();
      int cnt=0;
      int n=s.length();
        if(n==0){return 0;}
        for(int i=0;i<n;i++){
           if(s.charAt(i)==')' && !st.isEmpty() && st.peek()=='(') {
              st.pop();} 
            else
                st.push(s.charAt(i));
        }
 
         return st.size() ;
       
    }
}