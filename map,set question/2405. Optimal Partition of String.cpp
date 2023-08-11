class Solution {
public:
    int partitionString(string s) {
        unordered_map<char,int> m;
        int ans=1;
        for(auto i: s){
            if(m.find(i)!= m.end()){
                ans++;
                m.clear();            
                }
            m[i]++;
        }
            return ans;
    }
};