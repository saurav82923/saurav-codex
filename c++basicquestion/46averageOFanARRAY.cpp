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
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        
    }
    int avg=sum/n;
    cout<<"average is "<<avg;
}