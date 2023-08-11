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
  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
     
    ll t, n, ans, i, j;
    
    cin>>t;
    
    for(;t--;)
    {
        ans=0;
        
        cin>>n;
        
        ll a[n];
        
        for(i=0; i<n; i++){
            cin>>a[i];
        }
        
        for(i=0; i<n; i++)
        {
            ans=max(ans, a[i]-a[0]);
            ans=max(ans, a[n-1]-a[i]);
            
    
            
            ans=max(ans, a[i]-a[(i+1)%n]);
            
            
        }
        
        cout<<ans<<"\n";
    }



    #ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 
    return 0;
}