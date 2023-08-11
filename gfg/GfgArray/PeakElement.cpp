class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
      int index=max_element(arr,arr+n)-arr;
      return index;
    }
};