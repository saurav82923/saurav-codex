class Solution{
public:	
	
	int divisibleBy4 (string N)
	{
	    // Your Code Here
	    int check=0;
    for(int i=0;i<N.length();i++){
        check=check*10+N[i]-'0';
    }
    if(check%4==0){
        return 1;
    }
    else{
        return 0;
    }
	}
};