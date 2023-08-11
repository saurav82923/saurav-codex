class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> v,v1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0)
                v.push_back(nums[i]);
            else
                v1.push_back(nums[i]);
        }
        int a=0;
        int b=0;
         for(int i=0; i<nums.size(); i++){
           if(i%2 ==0){
            nums[i]=v[a];
            a++;}
            else
            {
                nums[i]=v1[b];
                b++;
            }
        }
        return nums;
    }
};