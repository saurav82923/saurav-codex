class Solution{
    public:
    void update(int a[], int n, int updates[], int k)
    {
        // Your code goes here
        for(int j=0; j<k; j++){
            int index=updates[j]-1;
            
                a[index]++;
            
        }
          for(int i=1;i<n;i++)
       {
           a[i] = a[i] + a[i-1];
       }
    }
    }