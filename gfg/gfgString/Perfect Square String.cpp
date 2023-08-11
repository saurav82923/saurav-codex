int isSquare(string S){
    //complete the function here
    int sum=0;
    for(int i=0;i<S.length();i++){
        sum=sum+ (int)S[i];
    }
    if((float)sqrt(sum)==(int)sqrt(sum))
        return 1;
    else
        return 0;
}