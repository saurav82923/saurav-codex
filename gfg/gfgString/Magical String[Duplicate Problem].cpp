class Solution{   
public:
    string magicalString(string S){
        // code here 
        for(int i=0;i<S.length();i++){
            S[i]='a'+'z'-S[i];
        }
        return S;
    }
};
