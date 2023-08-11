#include<bits/stdc++.h>
using namespace std;
vector<int> reverse(vector<int> v3){
    int start=0;
    int end=v3.size()-1;
    while(start<end){
        swap(v3[start],v3[end]);
        start++;
        end--;
    }
    return v3;

}
int main(){
    vector<int > v,v1;
    v.push_back(1);
    v.push_back(7);
    v.push_back(18);
    v.push_back(2);
    v.push_back(6);
    v1=reverse(v);
    for(int i:v){
        cout<<i<<endl;
    }
     for(int i:v1){
        cout<<i<<endl;
    }

}
