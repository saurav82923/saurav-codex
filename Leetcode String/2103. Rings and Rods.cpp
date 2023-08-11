class Solution {
public:
    int countPoints(string rings) {
       map<int,vector<char> > m;
       for(int i=0; i<rings.length()-1; i+=2) {
           m[rings[i+1]-'0'].push_back(rings[i]);
       }
       int cnt=0;
       for(auto i:m){
           int innerCountr=0;
           int innerCountg=0;
           int innerCountb=0;
           for(auto j:i.second){
               if(j == 'R') innerCountr++;
               if(j == 'G') innerCountg++;
               if(j == 'B') innerCountb++;
           }
           if(innerCountr>=1 && innerCountb>=1 && innerCountg>= 1)
            cnt++;
       }
       return cnt;
    }
};