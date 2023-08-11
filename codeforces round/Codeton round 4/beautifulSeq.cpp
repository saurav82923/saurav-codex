#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int size;
        cin>>size;
        vector<int> v(size),v1(size);
        int cnt=0;
        for(int i=0; i<size; i++){
            cin>>v[i];
            v1[i]=v[i];
            if(v[i]>= size)
                cnt++;
           
        }
     int a=0; 
    for(int i=0; i<size; i++){
     if( 1 && v1[i]<=i+1){
      cout << "YES" << endl;
      a=1;
      break;
     }
    }
    if(a==0)
    cout << "NO" << endl;
    }
     
        
    
    
    return 0;
}