#include<iostream>
using namespace std;
int main(){
    int n,rem;
    cout<<"give an no for calculating its binary ";
    cin>>n;
    int i=0,a[10];
    while(n>0){
        rem=n%2;
        n=n/2;//OR WE CAN WRITE N=N>>1
        a[i]=rem;
        i++;
    }
    cout<<"the value is "<<endl;
    for(int b=sizeof(a[10]);b>0;b--){
            cout<<a[b-1]<<" ";
    }
}