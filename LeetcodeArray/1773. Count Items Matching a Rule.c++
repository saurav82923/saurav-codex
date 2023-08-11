class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int no;
        if(ruleKey == "type")
            no= 1;
        else if(ruleKey == "color")
            no=2;
        else
            no=3;
        int cnt=0;
        for(int i=0; i<items.size(); i++){
          if(items[i][no-1] == ruleValue)
            cnt++;
        }
        return cnt;
    }
};