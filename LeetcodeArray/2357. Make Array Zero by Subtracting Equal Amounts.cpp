class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int cnt=0;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i++){
            int small = *min_element(nums.begin()+i,nums.end());
            if(small !=0){
                cnt++;
              for(int j=i; j<nums.size(); j++){
                nums[j]=nums[j]-small;

            }
            }
        }
        return cnt;
    }
};