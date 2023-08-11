class Solution{
    public:
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        priority_queue<int> pq;
         int i = 0;
        while(i < n && i < m) {
            pq.push(a[i]);
            pq.push(b[i]);
            ++i;
        }
        while(i < n) {
            pq.push(a[i]);
            ++i;
        }
        while(i < m) {
            pq.push(b[i]);
            ++i;
        }
       vector<int> res(n+m);
        i = 0;
        while(!pq.empty()) {
            res[i] = pq.top();
            pq.pop();
            ++i;
        }
        return res;
    }
};