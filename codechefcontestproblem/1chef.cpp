#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	     int maxi=arr[0];
	    for(int i=0;i<n-1;i++){
	      
	       if(maxi<arr[i+1]){
	          maxi=arr[i+1];
	       }
	    }
	     cout<<maxi<<endl;
	}
	return 0;
}
