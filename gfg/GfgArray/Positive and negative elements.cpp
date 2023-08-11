class Solution{
  public:
    vector<int> arranged(int a[],int n)
    {
    int a1[100000],a2[100000],j=0,k=0;
    vector<int > v;
    for(int i=0;i<n;i++){
        if(a[i]>=0){
            a1[j]=a[i];
            j++;
        }
        else{
            a2[k]=a[i];
            k++;
        }
    }
    for(int i=0;i<n;i++){
        v.push_back(a1[i]);
        
        v.push_back(a2[i]);
    }
    return v;
    }