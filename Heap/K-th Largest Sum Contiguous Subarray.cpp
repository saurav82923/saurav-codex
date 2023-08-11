class Solution{
public:
    int kthLargest(vector<int> &Arr,int N,int K){
        
        int n = Arr.size();
        vector<int> ans;
        for(int i = 0;  i<n; i++){
            int sum =0;
            for(int j=i; j<n; j++){
                sum += Arr[j];
                ans.push_back(sum);
            }
        }
        sort(ans.begin(),ans.end());
        return ans[ans.size()-K];
    }
};