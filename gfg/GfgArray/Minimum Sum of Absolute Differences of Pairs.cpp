class Solution{
public:
    long long findMinSum(vector<int> &A,vector<int> &B,int N){
        long long sum=0;
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        for(int i=0;i<A.size();i++){
            pair<int,int> p;
            p=make_pair(A[i],B[i]);
            sum=sum+ abs(p.first - p.second);
        }
        return sum;
    }
};