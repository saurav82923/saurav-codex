class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        // code here
        int a;
        map<int,int> m;
        for(int i=0;i<N;i++){
            m[arr[i]]++;
        }
        for(auto i:m){
            if(i.second==1)
                a=i.first;
        }
        return a;
    }
};