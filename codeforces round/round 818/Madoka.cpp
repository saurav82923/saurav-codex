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
   
    // Start

    int test;
    cin>> test;
    while(test--){
        long long num;
        cin>> num;
        if(num == 1)
            cout<<"1"<< endl;
        else{
           // long long a= pow(num,2)-(pow(2,num-1)-2);
           long long a= num + (2*(num/2)) + (2*(num/3));

            cout<< a <<endl;
        }
    }


    #ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 
    return 0;
}