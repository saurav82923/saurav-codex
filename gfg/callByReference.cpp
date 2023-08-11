void reverse_dig(int &a,int &b)
{
    int ans=0;
    //Add your code here.
    while(a>0){
        int c=a%10;
        ans=(ans*10)+c;
        a=a/10;
    }
   
    int ans1=0;
     while(b>0){
        int d=b%10;
        ans1=(ans1*10)+d;
        b=b/10;
    }
    a=ans;
    b=ans1;
}
void swap(int &a,int &b)
{
    //Add your code here.
    int c=a;
    a=b;
    b=c;
}
