 int i=0;
    int start =0;
    string st="";
    map<char,bool> mp;
    for( i=s.size()-1;i>=0;i--){
        if(s[i]!=' '){
            st+=s[i];
        }
    }    
    string st1="";
    for( i=0;i<st.size();i++){
        if(mp.find(st[i])==mp.end()){
            st1+=st[i];
            mp[st[i]]=true;
        }
    }
    return st1;