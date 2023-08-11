class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> ans(n+1,0);
        for(auto i: trust){
            ans[i[0]]--;
            ans[i[1]]++;
        }
        int a;
        for(int i=1; i<=n; i++){
            a=ans[i];
            if(a == n-1)
                return i;
        }
        return -1;
    }
};