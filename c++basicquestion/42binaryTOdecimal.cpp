// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a binary no "   ;
//     cin>>n;
//     int a,b,s=0,i=0;
//     while(n>0){ // O(DlogSETbITS)
//         a=n%10;
//         b=pow(2,i)*a; 
//         s=s+b; 
//         n=n/10;

//         i++;

//     }
//     cout<<"your decimal value is "<<s;
// }

#include<iostream>
using namespace std;

int main() {
    int binNum;
    cin>>binNum;

    int pos = 0, ans = 0;
    while(binNum > 0) { // 1101
        int bit = binNum % 10; // 1 0 1
        binNum/=10; // 110
        ans+=((1<<pos) * bit); // 5
        pos++;
    }

    cout<<(1 << 2)<<"\n";

    cout<<ans<<"\n";
}