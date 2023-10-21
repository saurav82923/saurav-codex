class Solution {
public:
    int secondHighest(string s1) {
        set<int> s;
        for(int i=0 ; i<s1.length(); i++){
            if(s1[i]<=57 && s1[i]>47){
                s.insert(s1[i]-'0');
            }
        }
        if(s.size()> 1)
        return *--(--s.end());
        else
            return -1;
    }
};