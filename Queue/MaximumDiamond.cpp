class Solution {
  public:
    int maxDiamonds(int A[], int N, int K) {
        // code here
        priority_queue <int> p;
        for(int i = 0;i<N;i++){
            p.push(A[i]);
        }
        int sum= 0;
        for(int i = 0;i<K;i++){
            int tp=p.top();
            p.pop();
            p.push(tp/2);
            sum += tp;
        }
        return sum;
    }
};
