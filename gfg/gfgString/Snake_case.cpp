 class Solution {
  public:
    string snakeCase(string S , int n) {
        // code here
        for(int i=0;i<n;i++){
            if(S[i]>='A' && S[i]<='Z')
                S[i]=S[i]-'A'+'a';
            else if(S[i]<='z'&& S[i]>='a')
                S[i]=S[i];
            else if(S[i]==' ')
                S[i]='_';
        }
        return S;
    }
};