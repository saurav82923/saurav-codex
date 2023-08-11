class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
           int count=0;
        sort(arr,arr+n);
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=n-1;j>=0;j--){
               if(arr[i]+arr[j]==k)
                  cnt++;
        }
            
        
        return cnt;
    }
};