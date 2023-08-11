#include<iostream>
using namespace std;
int inc(int *a,int *b);
int main(){
    int a,b; 
    cout<<"give two values for incrementing on it ";
    cin>>a>>b; 
    inc(&a,&b);
    cout<<"the new values is "<<a<<b; 
}
int inc(int *a,int *b){
    (*a)++;
    (*b)++;
    return 0;
}