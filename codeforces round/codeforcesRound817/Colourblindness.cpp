#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>> test;
    while(test-- ){
        int col;
        cin>> col;
        char arr[2][col];
        for(int i = 0; i<2; i++){
            for( int j =0; j<col; j++){
                cin>> arr[i][j];
            }
        }
        int arr1[2][col];
         for(int i = 0; i<2; i++){
            for( int j =0; j<col; j++){
                if( arr[i][j] == 'B')
                    arr1[i][j]= 'G';
                else
                    arr1[i][j]=arr[i][j];
            }
        }
        int cnt=0;
         
            for( int j =0; j<col; j++){
              if(arr1[0][j] != arr1[1][j]){
                cout<<"NO"<<endl;
                break;
              }
              else
                cnt++;
            }
        
        if(cnt == col)
            cout<<"YES"<<endl;
    }
    return 0;
}