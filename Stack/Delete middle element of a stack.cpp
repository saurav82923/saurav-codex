class Solution
{
    public:
    void solve(stack<int>&s,int count, int size){
        if(count==size/2){
            s.pop();
            return;
        }
        int a=s.top();
        s.pop();
        solve(s,count+1,size);
        s.push(a);
    }
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        int count=0;
        
        solve(s,count,sizeOfStack);
    }
};