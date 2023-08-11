#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;

	while(n--){
	   
	    	array a[3];
	    for(int i=0;i<3;i++){
	        cin>>a[i];
	    }
	    sort(a.begin(),a.end());
	    cout<<a[1]<<endl;
	}
	return 0;
}
