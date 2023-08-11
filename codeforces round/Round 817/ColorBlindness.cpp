#include<bits/stdc++.h>
using namespace std;
void file_i_o() {
    std::ios_base::sync_with_stdio(0); 
    std::cin.tie(0); 
    std::cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

int main() {
    clock_t begin = clock();
    file_i_o();
   
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


    #ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 
    return 0;
}