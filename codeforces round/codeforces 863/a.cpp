#include<bits/stdc++.h>
using namespace std;
void solution(){
      int size,d;
   string str1="",res="";
   cin>>size>>d>>str1;
   string digit=to_string(d);
   int j=-1;
   int a=0;
   for(int i=0; i<size; i++){
       if((str1[i]- 48)<d && 1 ) {
           str1.insert(i,digit);
           a=1;
           break;
       } 
   }
       char da=char(d);
       if(a==0)
        str1.push_back(d+'0');
    cout<<str1<<endl;
    
}

int main(){
    int no;
    cin>>no;
    while(no--){
        solution();
    }
    return 0;
}