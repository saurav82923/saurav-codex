#include<bits/stdc++.h>
using namespace std;
int solution(){
    string ans;
    cin>>ans;
    int n=ans.length();
    int pos=-1;
    for(int j=1; j<=n-2; j++){
        if(ans[j] == 'a'){
            pos=j;
            break;
        }
    }
    if(pos != -1){
        cout<<ans.substr(0,pos)<<" "<<ans[pos]<<" "<<ans.substr(pos+1,n-1)<<endl;
    }
    else
        cout<<ans[0]<<" "<<ans.substr(1,n-2)<<" "<<ans[n-1]<<endl;
    return 0;
}
int main(){
    int no;
    cin>>no;
    while(no--){
      int a=  solution();
    }
}