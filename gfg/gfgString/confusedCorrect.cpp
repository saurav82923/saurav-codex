long long findDiff(long long amount){
   
   
   long long a1=amount;
   long long a2=amount;
   long long sum=0;
   while(a1>0){
       long long a=a1%10;
       sum=sum*10 +a;
       a1=a1/10;
       
   }
    long long sum1=0;
    while(sum>0){
        long long a=sum%10;
        if(a==6)
            a=9;
        // if(a==9)
        //     a=6;
       sum1=sum1*10 +a;    
       sum=sum/10;
    }
    // cout<<sum1;
    return sum1-amount;
}