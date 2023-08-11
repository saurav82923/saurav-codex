#include<iostream>
using namespace std;
void evenorodd(int n);
int main(){
     int n;
    cout<<"enter an no to check whether its is even or odd ";
    cin>>n;
    evenorodd(n);


}
void evenorodd(int n){
    if(n%2==0){
        cout<<"its even ";
    }
    else 
         cout<<"odd";
}