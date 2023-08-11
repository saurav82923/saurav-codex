int solve(int *arr,int s,int e ,int k){
    if(s>e)
        return -1;
    int mid=s+(e-s)/2;
    if(arr[mid]==k)
        return mid;
    if(arr[mid]<k){
        return solve(arr,mid+1,e,k);
        
    }
    else{
        return solve(arr,s,mid-1,k);
    }
}
int binarySearch(int *input, int n, int val)
{
    //Write your code here
    int ans= solve(input,0,n-1,val);
    return ans;
    
}