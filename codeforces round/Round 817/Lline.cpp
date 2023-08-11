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
    
    ll t, n, i, j, ans;
    string a;
    cin>>t;
    
    for(;t--;)
    {
        cin>>n;
        cin>>a;
        
        ll ch[n];
        
        ans=0;
        
        for(i=0; i<n; i++)
        {
            if(a[i]=='L')
            ans=ans+i;
            else
            ans=ans+n-i-1;
            
            if(a[i]=='L'){
                ch[i]=n-i-1-(i);
            }else{
                ch[i]=i-(n-i-1);
            }
        }
        sort(ch, ch+n);
        reverse(ch, ch+n);
        
        for(i=0; i<n; i++)
        {
            if(ch[i]>0)
            {
                ans=ans+ch[i];
            }
            cout<<ans<<" ";
        }
        cout<<"\n";
        
        
    }



    #ifndef ONLINE_JUDGE 
      clock_t end = clock();
      std::cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 
    return 0;
}