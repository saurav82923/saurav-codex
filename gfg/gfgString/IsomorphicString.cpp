class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        int count=0;
        map<char,char> m1,m2;
       if(str1.length()!=str2.length())
        return 0;
        for(int i=0;i<str1.length();i++){
            m1[str1[i]]=str2[i];
             m2[str2[i]]=str1[i];
        }
        for(int i=0;i<str1.length();i++){
            if(m1[str1[i]]!=str2[i] || m2[str2[i]]!=str1[i])
                 return 0;
            
        }
        return 1;
        
       
     
        
    }
}