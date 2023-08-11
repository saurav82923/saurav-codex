#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of an array ";
    cin>>n;
    int arr[n];
    cout<<"enter the values in an array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<endl;
    }
}