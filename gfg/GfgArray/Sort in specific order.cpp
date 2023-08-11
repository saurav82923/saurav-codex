class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        //code here.
        vector<long > v,v1;
        sort(arr,arr+n);
        for(long long i=0;i<n;i++){
            if((arr[i])%2 == 0)
                v.push_back(arr[i]);
            else
                v1.push_back(arr[i]);
        }
        reverse(v1.begin(),v1.end());
        // for(auto i:v1)
        //     cout<<i<< " ";
        //  for(auto i:v)
        //     cout<<i<<" ";
        for(long long i=0;i<v1.size();i++){
            arr[i]=v1[i];
        }
        int j=0;
        for(long long i=v1.size();i<n;i++){
            arr[i]=v[j];
            j++;
        }
    }
}