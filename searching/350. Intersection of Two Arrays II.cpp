class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
         unordered_map <int, int> a1, a2;
        vector <int> intsec;
        
        for (int i: nums1) {
            a1[i]++;
        }
        
        for (int i: nums2) {
            a2[i]++;
        }
        
        for (auto itr: a1) {
            int n = itr.first;
            if (a2.count(n)) {
                for (int i = 0; i < min(a1[n], a2[n]); i++) {
                    intsec.push_back(n);
                }
            }
        }
        
        return intsec;
    }
};