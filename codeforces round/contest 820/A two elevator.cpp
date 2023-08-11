#include<bits/stdc++.h>
using namespace std;
#define ll long long

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

  int t;
  cin>> t;
  while(t--){
    int size;
    cin>> size;
    string s="";
    cin>>s;
    unordered_map<int,char> m;
   int alpha =97;
   int count = 1;
   for(int i =0 ;i<26; i++){
    char ch = alpha;
    m[count++] = ch;

    alpha++;
   }
   for(int i = 0; i< s.length(); i++){
    if(s[i+2] != 0 && i+2 <s.length())
        cout<<m[s[i]];
    else if(s[i+2] == 0 && i+2 <s.length()){
        string s1 = s.substr(i,i+2);
        int a = stoi(s1);
        cout<<m[a];
        i+=3;
    }
    else
        cout<<m[s[i]];
   }
   cout<<endl;
  }



    #ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 
    return 0;
}