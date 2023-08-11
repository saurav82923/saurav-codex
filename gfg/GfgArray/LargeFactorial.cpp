class Solution{
      long long fact(long long a){
        if(a==0){
            return 1;
        }
        else{
            long long fact=1;
            for(long long i=1;i<=a;i++){
                fact=fact*i;
            }
            return fact;
        }
    }
public:
    vector<long long> factorial(vector<long long> a, int n) {
        vector<int> v;
        for(int i=0;i<n;i++){
            v.push_back(fact(a[i]));
        }
        return v;
    }
};