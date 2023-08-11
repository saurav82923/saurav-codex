#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="saurav";
    m[6]="rav";
    m[5]="av";
    cout<<m[5];
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}