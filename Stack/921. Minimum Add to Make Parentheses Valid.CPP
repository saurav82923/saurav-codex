class Solution {
public:
    int minAddToMakeValid(string s1) {
        stack<char> st;
      int cnt=0;
      int n=s1.size();
        if(n==0){return 0;}
        for(int i=0;i<n;i++){
           if(s1[i]==')' && !st.empty() && st.top()=='(') {
               if( !st.empty()){
                    if(st.top()=='('){st.pop();}}}
        else
            st.push(s1[i]);
        }
 
         return st.size() ;
       
    }

    
};