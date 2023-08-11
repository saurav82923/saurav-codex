class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N) 
    { 
        // Your code here
        int maxi=INT_MIN;
        int s=0;
        int e=N-1;
        while(s<=e){
            if(A[s]<=A[e] ){
                maxi=max(maxi,(e-s));
                s=0;
                e--;
            }
            else{
                
                s++;
            }
        }
        return maxi;
    }
};