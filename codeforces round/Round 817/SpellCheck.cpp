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
    cin>>test;
    while(test--){
        int a;
        cin>>a;
        string s="Timur";
        string s1="";
        cin>>s1;
        sort(s.begin(),s.end());
         sort(s1.begin(),s1.end());
         if( s == s1)
            cout<< "YES"<<endl;
        else    
            cout<< "NO" << endl;
    }


    #ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 
    return 0;
}