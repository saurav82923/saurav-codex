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
    cin >> test;
    while(test--){
        int size;
        cin>> size;
        int m1=0,m2=0,m3=0;
        vector<string> v1;
        vector<string> v2;
        vector<string> v3;
    unordered_map<string,int> m;
        for(int i = 0;i<size; i++){
            string a;
            cin>>a;
            v1.push_back(a);
            m[a]++;
        }
      
         for(int i = 0;i<size; i++){
            string a= "";
            cin>>a;
            v2.push_back(a);
            m[a]++;
        }
 
     for(int i = 0;i<size; i++){
            string a= "";
            cin>>a;
            v3.push_back(a);
              m[a]++;
        }
    for(int i=0; i<size; i++){
            if(m[v2[i]] == 1)
                m2 = m2+3;
        if(m[v2[i]] == 2)
                m2 = m2+1;
          else
            m2=m2;
        }
        for(int i=0; i<size; i++){
            if(m[v3[i]] == 1)
                m3 = m3+3;
        if(m[v3[i]] == 2)
                m3 = m3+1;
          else
            m3=m3;
        }
         for(int i=0; i<size; i++){
            if(m[v1[i]] == 1)
                m1 = m1+3;
        if(m[v1[i]] == 2)
                m1 = m1+1;
          else
            m1=m1;
        }
        cout<<m1<<" "<< m2<<" "<<m3<<endl;
        
 
    }


    #ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 
    return 0;
}