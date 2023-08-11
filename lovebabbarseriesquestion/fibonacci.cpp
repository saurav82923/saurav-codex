#include<iostream>
using namespace std;
int main(){
    int n=10,sum=0,c;
    int a=0;
    int b=1;
     cout<<a<<" ";
        cout<<b<<" ";
    for(int i=0;i<n;i++){
        // sum=sum+i; dont use
      c=a+b;
      cout<<c<<" ";
      a=b; 
      b=c; 
       


        
    }
    return 0;
}
