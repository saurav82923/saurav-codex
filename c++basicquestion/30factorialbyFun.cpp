#include<iostream>
using namespace std;
int fact(int n);
int main(){
    int n,facti;
    cout<<"enter the no which you to factorial"<<endl;
    cin>>n;
    facti=fact(n);
    cout<<"your factorial is "<<facti;
}
int fact(int n){
    int facti=1;
    for(int i=1;i<=n;i++){
         
        facti = facti*i;
        
    }
    
    return facti;
}