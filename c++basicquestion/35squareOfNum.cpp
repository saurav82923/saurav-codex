#include<iostream>
using namespace std;
int sq(int n);
int main(){
    int n;
    cout<<"enter an no for calculating its square ";
    cin>>n;
    cout<<"the value is "<<sq(n);

}
int sq(int n){
    int a=n*n;
    return a;
}