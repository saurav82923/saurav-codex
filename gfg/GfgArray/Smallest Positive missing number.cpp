class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        sort(arr,arr+n);
        int j=1;
        for(int i=0;i<n;i++){
            if(arr[i]>0 && j==arr[i]){
                j++;
            }
        }
        return j;
    } 
};