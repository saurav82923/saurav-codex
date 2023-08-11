class Solution{
    public:
    
    int LastIndex(string s, char p){
        //complete the function here
        // int a=upper_bound(s.begin(),s.end(),p)-s.begin() -1;
        // if(a!=s.length())
        //     return a;
        // else
        //     return -1;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==p){
                return i;
            }
        }
        return -1;
    }
};