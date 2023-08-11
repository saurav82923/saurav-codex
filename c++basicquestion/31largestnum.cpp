#include<iostream>
using namespace std;
int big(int a,int b,int c);

int main(){
    int a,b,c;
    cout<<"give three no for checking which is largest ";
    cin>>a>>b>>c; 
    cout<<"biggest no is "<<big(a,b,c);

}
int big(int a,int b,int c){
    if(a>b && a>c)
        return a;
    else if(b>c && b>a)
        return b;
    else 
        return c; 

}