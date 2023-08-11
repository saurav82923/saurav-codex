#include<iostream>
using namespace std;
int main(){
    int n,a,b,d,s=0;
    cout<<"give an no to check whether its is armstrong no or not ";
    cin>>n;
    d=n;
    while(n>0){
    a=n%10;
    b=a*a*a;
    s=s+b;
    n=n/10;
    }
    if(s==d)
        cout<<"it is an armstrong no ";
    else 
        cout<<"its not an armstrong no ";
}