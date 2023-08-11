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
        int n,k;
        cin>> n>> k;
        vector<int> v,v1(n);
        for(int i = 0; i< n ;i++){
            int no;
            cin>>no;
            v.push_back(no);
        }
        // sort(v.begin(),v.end());
        int size = v.size();
        for(int i = 0; i<n; i++)
            v1[(i+1)%k]= max(v1[(i+1)%k],v[i]);
        long long sum=0;
        for(int i = 0; i<k; i++){
            sum = sum + v1[i];
        }
        cout<<sum<<endl;
    }


    #ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 
    return 0;
}