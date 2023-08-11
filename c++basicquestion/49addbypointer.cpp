#include<iostream>
using namespace std;
int main(){
 int a,b; 
 int *c,*d;
 cout<<"enter two no for addition "   ;
 cin>>a>>b; 
 c=&a;
 d=&b; 
 cout<<"add is "<<(*c + *d);
}