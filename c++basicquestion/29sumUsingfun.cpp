#include<iostream>
using namespace std;
int sum(int a,int b);
int main(){
    int a,b,c; 
    cout<<"give two no for add";
    cin>>a>>b; 
    c=sum(a,b);
    cout<<"the sum is "<<c;
}
int sum(int a,int b){
    int c=a+b; 
    return c; 

}