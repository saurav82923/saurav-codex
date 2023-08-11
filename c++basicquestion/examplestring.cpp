#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="ab2";
    for(int i=0; i<s.length(); i++){
        if(isdigit(s[i]))
            cout<<"present"<<endl;
    }
}