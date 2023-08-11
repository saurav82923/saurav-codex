class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A,A+n);
        for(int i=0;i<n;i++){
            int low=i+1;
            int high=n-1;
            while(low<high){
                if(X==A[i]+A[low]+A[high])
                    return 1;
                else if(A[i]+A[low]+A[high]<X)
                    low++;
                else if(A[i]+A[low]+A[high]>X)
                    high--;
            }
           
        }
         return 0;
    }

};