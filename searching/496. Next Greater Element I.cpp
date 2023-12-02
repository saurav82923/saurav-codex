class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int next;
        vector<int> ans;
        for(int i=0 ;i< nums1.size(); i++){
            next=-1;
            auto a=find(nums2.begin(), nums2.end(),nums1[i]);
            int index=a-nums2.begin();
            for(int j=index+1; j<nums2.size(); j++){
                if(nums1[i] < nums2[j]){
                    next= nums2[j];
                    break;
                }
            }
            ans.push_back(next);
        }
        return ans;
    }
};