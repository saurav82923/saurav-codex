class Solution {
public:
    bool halvesAreAlike(string s) {
        int a=s.length()/2;
        string s1= s.substr(0,a);
        string s2= s.substr(a,2*a);
        cout<<s1<<" "<<s2;
        map<char,int> m3,m4;
        for(int i=0;i<a;i++){
            if( s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u' || s1[i]=='A' || s1[i]=='E' || s1[i]=='I' || s1[i]=='O' || s1[i]=='U'  )
             m3[s1[i]]++;
        }
        for(int i=0;i<a;i++){
            if( s2[i]=='a' || s2[i]=='e' || s2[i]=='i' || s2[i]=='o' || s2[i]=='u' || s2[i]=='A' || s2[i]=='E' || s2[i]=='I' || s2[i]=='O' || s2[i]=='U' )
            m4[s2[i]]++;
        }
        int cnt1=0,cnt2=0;
      for(auto i:m3)
        cnt1= cnt1 + i.second;
    for(auto i:m4)
        cnt2= cnt2 + i.second;
        if(cnt1 == cnt2)
            return true;
        else
            return false;
    }
};