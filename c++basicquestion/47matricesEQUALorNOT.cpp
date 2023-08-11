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
    cout<<"give values for second matrice ";
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           cin>>arr1[i][j];
       }
    }
     for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           if(arr[i][j]==arr1[i][j]){
            //     cout<<"matrices are same ";
            //     break;}
           }
             else {
                  cout<<"matrices are not same ";
                  break;
            }
        
       }
     }
     cout<<"matrices are same ";
}