class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char> s;
        for(int i=0; i<allowed.length();i++){
            s.insert(allowed[i]);
        }
        int cnt=0;
        for(int i=0; i<words.size();i++){
            int t =0;
            for(int j=0; j<words[i].length();j++){
              if(s.count(words[i][j]))
                t++;
            }
            if(t ==words[i].length() )
                cnt++;
            
        
        }
        return cnt;

    }
};