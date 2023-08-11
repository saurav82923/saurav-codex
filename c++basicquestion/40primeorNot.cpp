#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"give an no for checking its prime or not ";
    cin>>n;
     if(n==1){
        cout<<"not prime";
     }
        
    for( i=2;i<n;i++){
        if(n%i==0){
            cout<<"not prime ";
            break;
        }
        //   if(n==(i+1)){
        //  cout<<"its prime";// because of break function start
    }
   
      if(n==i){
         cout<<"its prime";
    }
}