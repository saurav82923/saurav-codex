class Solution {
public:
    vector<string> cellsInRange(string s) {
    vector<string> v;
        char c1,c2;
        int r1,r2;
            c1 = s[0];
            c2 = s[3];
            r1 = s[1] - '0';
            r2 = s[4] - '0';

        
        for( char j = c1; j<=c2; j++){
            for( int i =r1; i<=r2; i++ ){
                string ss= j + to_string(i);
             v.push_back(ss);
            }
        }
        
        return v;
    }
};