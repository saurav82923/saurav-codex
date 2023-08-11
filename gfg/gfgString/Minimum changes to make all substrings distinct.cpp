int minChange(string S) { 
     //complete the function here
     set<char> s;
     for(int i=0;i<S.length();i++){
         s.insert(S[i]);
     }
     int b=s.size();
     int c=S.length();
     return c-b;
} 