// 1!/1 + 2!/2 + 3!/3 +.... n!/n
#include<iostream>
using namespace std;
void factADD(int n);
int main(){
    int n;
    cout<<"give the term where you want to add ";
    cin>>n;
    factADD(n);
}
void factADD(int n){
    int a,s=0,fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
        a=fact/i;
        s=s+a;
    }
    cout<<"add is "<<s;
}