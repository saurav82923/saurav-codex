    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string ans="";
       for(int i=0;i<arr[0].length();i++){
         char ch = arr[0][i];
         bool match = true ;
           for(int j=1;j<N;j++){
             if(arr[j].size() < i || ch != arr[j][i])   {
                 match = false ;
                 break;
             }
           }
         if(match == false)
            break;
        else
            ans.push_back(ch);
       }
       if(ans.size() == 0)
           return "-1";
        else
            return ans;
    }
};