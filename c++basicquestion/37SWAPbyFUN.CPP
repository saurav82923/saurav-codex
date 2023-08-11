#include<iostream>
using namespace std;
void swapwithoutusingthirdvariables(int *a,int *b);
int main(){
    int a,b;
    cout<<"give two no for swapping "<<endl;
    cin>>a>>b;
    swapwithoutusingthirdvariables(&a,&b);

    
}
void  swapwithoutusingthirdvariables(int *a,int *b){
    *a=*a + *b; 
    *b=*a - *b; 
    *a=*a- *b; 
    cout<<" after swapping is "<<*a<<"\n"<<*b; 

}