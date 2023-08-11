class Solution{
public:	
	bool check(string &s,int i,int j){
	    if(i>=j)
	        return 1;
        if(s[i]==s[j])
            check(s,i+1,j-1);
        else
            return 0;
            
	}
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    return check(S,0,S.length()-1);
	}

};