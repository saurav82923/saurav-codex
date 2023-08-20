class Solution {
public:
    int minimumSum(int n, int k) {
        vector<int> v;
        int a=1;
        unordered_map<int,int> mp;
        for(int i=0;i<n; i++){
            if(mp.find(k-a) == mp.end()){
                mp[a]++;
                v.push_back(a);
                a++;
            }
            else{
                a++;
                --i;
               
            }
        }
        int ans=0;
        for(auto i:v)
                ans=ans+i;
        return ans;
    }
};