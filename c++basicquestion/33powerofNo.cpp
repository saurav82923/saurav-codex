#include<iostream>
#include<math.h>
void result(int n,int w);
using namespace std;
int main(){
    int n,w;
    cout<<"give no. and its power ";
    cin>>n>>w;
    result(n,w);

}
void result(int n,int w){
    int mul=1;
    // int a=pow(n,w);
    // cout<<"answer is"<<a;
    for(int i=1;i<=w;i++){
        mul= mul*n;
        
    }
    cout<<"answer is "<<mul;
}
