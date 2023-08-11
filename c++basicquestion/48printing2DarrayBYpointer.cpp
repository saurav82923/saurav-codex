#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the rows and column of an array ";
    cin>>n>>m;
    int arr[n][m],arr1[n][m];
    cout<<"enter the values in an array ";
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           cin>>arr[i][j];
       }
    }
    for(int *i=&arr[0][0];i<&arr[n][m];i++){
         cout<<*i<<endl;
         
    }
}