#include<iostream>
using namespace std;
int main()
{
     int i,j,k,n=1;
     
     for(i=1;i<=4;i++)
     {
           k=1;
          for(j=1;j<=7;j++)
          {
               if(j>=5-i && j<=3+i && k)
               {
                    cout<<n;
                    k=0;
                    n++;

               }
               else{
                   cout<<" ";
                   k=1;
               }
               
               
          }
          cout<<"\n";
          n=1;
          
     }
     return 0;
}