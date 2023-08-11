class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
         sort(arr,arr+n);
        for(int i=0;i<n;i++){
            int low=i+1;
            int high=n-1;
            while(low<high){
                if(0==arr[i]+arr[low]+arr[high])
                    return 1;
                else if(arr[i]+arr[low]+arr[high]<0)
                    low++;
                else if(arr[i]+arr[low]+arr[high]>0)
                    high--;
            }
           
        }
         return 0; 
    };