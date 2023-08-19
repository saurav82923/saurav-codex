class Solution {
public:
    string addStrings(string num1, string num2) {

        vector<int> v,v1;
      for(int i=0; i<num1.length(); i++){
          v.push_back(num1[i]-'0');
      }
      for(int i=0; i<num2.length(); i++){
          v1.push_back(num2[i]-'0');
      }
        reverse(v.begin(),v.end());
        reverse(v1.begin(),v1.end());
     int a=0,b=0;
        int carry=0;
        vector<int> ans;
        int vsize=v.size()-1;
        int v1size=v1.size()-1;
        while(a < v.size() || b <v1.size() ){
            int a1,b1;
             if(a> vsize)
             a1= 0;
             else
             a1= v[a];
             
            if(b> v1size)
             b1= 0;
             else
             b1= v1[b];
            int sum=carry+a1+b1;
            ans.push_back(sum%10);
            carry=sum/10;
            a++;
            b++;

        }
       
        if(carry>0)
            ans.push_back(carry);
        reverse(ans.begin(),ans.end());
        string s="";
        for(int i=0; i<ans.size(); i++){
            s.push_back(ans[i]+48);
        }
        return s;
    }
};