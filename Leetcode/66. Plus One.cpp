class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(),digits.end());
        vector<int> dum(digits.size(),0);
        dum[0]=1;
        int a=0,b=0;
        int carry=0;
        vector<int> ans;
        while(a < digits.size() || b <dum.size() ){
            int a1= digits[a];
            int b1= dum[b];
            int sum=carry+a1+b1;
            ans.push_back(sum%10);
            carry=sum/10;
            a++;
            b++;

        }
        if(carry>0)
            ans.push_back(carry);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};