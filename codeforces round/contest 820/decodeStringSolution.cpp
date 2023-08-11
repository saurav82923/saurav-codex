
Pinned by Coding Community | Newton School
Karan Mashru
6 days ago
Code :

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, i, j, val;
    string a;
    cin>>t;
    
    for(;t--;)
    {
        cin>>n;
        cin>>a;
        string b="";
        
        for(i=n-1; i>=0;)
        {
            if(a[i]=='0'){
                val=(a[i-2]-48)*10+a[i-1]-48;
                i-=3;
            }else{
                val=a[i]-48;
                i--;
            }
            b+=char(val+97-1);
        }
        reverse(b.begin(), b.end());
        cout<<b<<"\n";
        
    }
    
}