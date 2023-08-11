int MinRemove(int n, string s){
    //complete the function here
    string s1=s;
    reverse(s1.begin(),s1.end());
    // cout<<s1;
    if(s1==s){
        return 1;
    }
    else
        return 2;
    
}