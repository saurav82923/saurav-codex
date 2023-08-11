class Solution{
  public:
  int smallestSumSubarray(vector<int>& a){
      //Code here
   int sum=0,mini=INT_MAX;
   for(int i=0;i<a.size();i++){
       sum =sum + a[i];
       mini=min(mini,sum);
       if(sum>0){
           sum=0;
       }
       
   }
   return mini;
  }
};