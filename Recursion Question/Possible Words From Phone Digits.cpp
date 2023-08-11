class Solution
{
   private:
   void solve(int a[],string output, int index, vector<string>& ans, string mapping[],int N) {
       // base case
       if(index >= N) {
           ans.push_back(output);
           return;
       }
       int number = a[index];
       string value = mapping[number];
       
       for(int i = 0; i < value.size(); i++) {
           output.push_back(value[i]);
           solve(a, output, index+1, ans, mapping,N);
           output.pop_back();
       }
   }
   public:
   //Function to find list of all words possible by pressing given numbers.
   vector<string> possibleWords(int a[], int N)
   {
       //Your code here
       vector<string> ans;
       if(N == 0) {
           return ans;
       }
       string output = "";
       int index = 0;
       string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
       solve(a,output,index,ans,mapping,N);
       return ans;
   }
};
