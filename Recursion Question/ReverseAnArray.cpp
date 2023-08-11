f#include <bits/stdc++.h>
using namespace std;


void reverse(int arr[],int i,int e){
    if(i>=e)
        return ;
    swap(arr[i],arr[e]);
    reverse(arr,i+1,e-1);
}
int main() {
	//code
	int test;
	cin>>test;
	while(test--){
	    int size;
	    cin>>size;
	    int arr[size];
	    for(int i=0;i<size;i++){
	        cin>>arr[i];
	    }
	    reverse(arr,0,size-1);
	    for(int i=0;i<size;i++){
	        cout<<arr[i]<<" ";
	    }
	}
	return 0;
}