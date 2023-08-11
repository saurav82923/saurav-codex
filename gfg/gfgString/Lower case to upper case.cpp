string to_upper(string str){
    //code
    string s="";
    for(int i=0;i<str.length();i++){
        str[i] = str[i]-'a'+'A';
    }
    return str;
}