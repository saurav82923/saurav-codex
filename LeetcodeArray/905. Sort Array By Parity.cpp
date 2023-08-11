class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
   int replace = 0, curr = 0;
        int len = A.size();
        while(curr < len) {
            if(A[curr]%2 == 0) {
                swap(A[replace++], A[curr]);
            }
            curr++;
        }
        return A;
         
     }
    
};