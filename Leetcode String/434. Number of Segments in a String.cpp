class Solution {
public:
    int countSegments(string s) {
       int count=0;
        bool fl=false;
       
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                fl=true;
            }
            if((s[i]==' ' || i==s.size()-1)&& fl){
                count++;
                fl=false;
        }
        }
    return count; 
    }
};