class Solution
{
public:
    void printTriangleDownwards(string str)
    {
        // Write Your Code here
         int a=str.length();
            int b=0;
        for(int i=0;i<str.length();i++){
           for(int i=a;i>1;i--){
               cout<<".";
           }
           for(int i=0;i<=b;i++)
                cout<<str[i];
        a--;
        b++;
        cout<<endl;
        }
      
    }
};