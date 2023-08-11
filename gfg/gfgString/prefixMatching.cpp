class Solution{   
public:
    int klengthpref(string arr[], int n, int k, string str){    
        string s="";
        int a=0;
        for(int i=0;i<k;i++){
            s=s+str[i];
        }
       
        for(int i=0;i<n;i++){
            if(s==arr[i].substr(0,k))
                a++;
        }
        return a;
    }