#include<iostream>
using namespace std;
int factorial(int n);
int main(){
    int n,k;
    cout<<"enter an no for getting factorial ";
    cin>>n;
    k=factorial(n);
    cout<<"fact is"<<"\n"<<k;
}
int factorial(int n){
    if(n==0)
        return 1;
    else
        return (n*factorial(n-1));
}