#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s="";
        cin>>s;
        int cnt=0;
        unordered_map<char,int> m;
        for(auto i:s){
            if(i == '?')
                cnt++;
        }
        int ans=1;
        for(int i=s.length()-1 ; i>=0; i--){
            if(s[i] == '?'){
                if(i== 0)
                    ans=ans*9;
                else    
                    ans=ans*10;
            }
        }
        if(s[0]-'0' == 0)
            cout<<0<<endl;
        else
            cout<<ans<<endl;
      
    }
    return 0;
    
      
}