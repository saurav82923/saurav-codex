class Solution{
    public:
    int sameChar(string A, string B)
    {
        // code here 
        int count=0;
        for(int i=0;i<A.length();i++){
            if(A[i]==B[i] || A[i]==B[i] - 'A' + 'a' || A[i]-'A'+'a'==B[i])
                count++;
        }
        return count;
    }
};
