#include<bits/stdc++.h>
using namespace std;
int solution(){
      int size,d;
   string str1="",res="";
   cin>>size>>d>>str1;
   int j=-1;
   for(int i=0; i<size; i++){
       if((str1[i]- 48)<d && 1 ) {
           res+='0'+d;
           j=i;
           break;
       } 
       res+=str1[i];
   }
   if(j==-1) res+='0'+d;
   else{
       for(int i=j; i<size; i++)
       res+=str1[i];
   }
   cout<<res<<endl;
   
}
int main(){
    int no;
    cin>>no;
    while(no--){
      int a=  solution();
    }
}