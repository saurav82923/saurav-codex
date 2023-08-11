#include<iostream>
using namespace std;
int main(){
    // 10,20,40,50,60
    int n;
    cout<<"enter the size of an array ";
    cin>>n;
    int arr[n];
    cout<<"enter the values in an array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"max value is "<<max<<endl;
     int min=arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<"min value is "<<min;
}