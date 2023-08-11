class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void swap(int *a,int *b){
        int c;
        c=*b;
        *b=*a;
        *a=c;
    }
    void bubbleSort(int arr[], int n)
    {
        // Your code here  
        if(n==0 || n==1)
            return ;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1])
                swap(&arr[i],&arr[i+1]);
        }
        bubbleSort(arr,n-1);
    }
};
