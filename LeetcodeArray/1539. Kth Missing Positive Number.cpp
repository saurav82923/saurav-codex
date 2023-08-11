class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int cnt=0;
        int ans;
        int i=1;
        while(cnt<k){
            if(binary_search(arr.begin(),arr.end(),i)==0){
                ans=i;
                cnt++;
            }
            i++;
        }
        return ans;
    }
};