  void solve(string &nums,string output,int index,vector<string> &ans){
        if(index>=nums.size()){
            if(output.length()>0)
            ans.push_back(output);
            return;
        }
        // #exclude
        solve(nums,output,index+1,ans);
        // #include
        char element=nums[index];
        output.push_back(element);
        solve(nums,output,index+1,ans);
    }
vector<string> subsequences(string str){
	
	// Write your code here
	 vector<string> ans;
        string output;
        int index=0;
        solve(str,output,index,ans);
        sort(ans.begin(),ans.end());
        return ans;
}
