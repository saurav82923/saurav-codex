long long findDiff(long long amount){
   
    long long c1=amount;
    long long n1=0;
    int k=0;
    while(amount>0){
        long long a=amount%10;
        if(a==6)
            a=9;
        if(a==9)
            a=6;
            
        for(int i=0;i<1;i++){
            n1=(a*pow(10,k) +n1);
            k++;
        }
        amount=amount/10;
    }
    cout<< abs(c1 - n1);
}