class Solution{
  public:
    int isReversible(string str, int n) { 
         //complete the function here
         string s=str;
         reverse(str.begin(),str.end());
         if(s==str){
             return 1;
         }
         return 0;
         
    } 