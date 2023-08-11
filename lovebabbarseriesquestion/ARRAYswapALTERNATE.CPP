#include<iostream>
using namespace std;
void swapalternate(int arr[],int size){
    int a,b;
    for(int i=0;i<size;i+=2){
    if(i+1<size){
       swap(arr[i],arr[i+1]);}
        
    }
    for(int j=0;j<size;j++){
        cout<<arr[j]<<" ";
    }
}
int main(){
    int swaparr[5]={1,2,3,4,5};
    swapalternate(swaparr,5);
    return 0;
}