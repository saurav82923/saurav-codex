#include<bits/stdc++.h>
using namespace std;

void binary(vector<int> &v,int t,int s, int l){
    while(s<l){
        int m=(s+l)/2;
        if(v[m] == t){
            cout<<"the value is present";
            return ;
        }
        else if(v[m] > t){
                l=m-1;

        }
        else
            s=m+1;
    }
    cout<<"not present"<<endl;
}
int main(){
    vector<int> v={1,2,5,6,7};
    binary(v,3,0,4);
    return 0;
}