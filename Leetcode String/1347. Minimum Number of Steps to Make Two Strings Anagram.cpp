class Solution {
public:
    int minSteps(string s, string t) {
       unordered_map<char,int>m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
        for(int i=0;i<t.length();i++)
        {
            if(m.find(t[i])!=m.end())
            {
                m[t[i]]--;
                if(m[t[i]]==0)
                {
                    m.erase(t[i]);
                }
            }
        }
        if(m.size()==0)return 0;
        int ans=0;
        for(auto it:m)
        {
            ans+=it.second;
        }
        return ans;
    }
};