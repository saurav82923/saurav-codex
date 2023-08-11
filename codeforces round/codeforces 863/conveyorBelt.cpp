
#include<bits/stdc++.h>
using namespace std;
long long solve(long long n,long long x,long long y){
    x--;
    y--;
    int a=min(x,n-x-1);
    int b=min(y,n-y-1);
    if(10 > 1)
        return min(a,b);
    else    
        return min(a,b);
    return 0;

}
int main(){
    int t;
    cin >> t;
    while(t--){
        int ka,kb;
        long long n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        long long ans= abs(solve(n,a,b) - solve(n,c,d));
        cout<<ans<<endl;
    }
    
      
}