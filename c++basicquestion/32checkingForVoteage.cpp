#include<iostream>
using namespace std;
void vote(int n);
int main(){
    int n;
    cout<<"enter your age for checking eligibility for voting ";
    cin>>n;
    vote(n);
    return 0;
}
void vote(int n){

    if(n>17)
        cout<<"you are eligible";
   else 
    cout<<"you are not eligible";
}