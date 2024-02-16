#include<bits/stdc++.h>
using namespace std;
int main(){
    int no= 12345;
    int cnt=0;
    while(no !=0){
         no=no/10;
        cnt++;
    }
    cout<<cnt<<endl;
}