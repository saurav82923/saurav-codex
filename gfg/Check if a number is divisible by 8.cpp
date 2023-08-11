class Solution{
    public:
    int DivisibleByEight(string S){
        //code here
                long long a,ans=0;
        for(int i=0;i< S.length(); i++){
            a = S[i]-'0';
            ans = ans*10+ a;
        }
        // cout<<ans;
        if(ans % 8 == 0){
            return 1;
        }
        else
            return -1;
    }
};
