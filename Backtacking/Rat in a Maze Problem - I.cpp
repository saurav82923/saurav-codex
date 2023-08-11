class Solution{
    public:
    bool isSafe(int x,int y,vector<vector<int>> &arr,vector<vector<bool>> &visited,int n){
        if(x >= 0 && x<n && y >= 0 && y < n && arr[x][y] == 1 && visited[x][y] == 0){
            return true;
        }
        else{
            return false;
        }
    }
    void solve(int x,int y,vector<vector<int>> &arr,int n,vector<string> &ans, vector<vector<bool>> &visited,string path){
        if(x == n-1 && y == n-1){
            ans.push_back(path);
            return;
        }
        visited[x][y] = true;
        // down 
        if(isSafe(x+1,y,arr,visited,n)==1){
            solve(x+1,y,arr,n,ans,visited,path+'D');
        }
        //left
         if(isSafe(x,y-1,arr,visited,n)==1){
            solve(x,y-1,arr,n,ans,visited,path+'L');
        }
        //right
         if(isSafe(x,y+1,arr,visited,n)==1){
            solve(x,y+1,arr,n,ans,visited,path+'R');
        }
        //up
         if(isSafe(x-1,y,arr,visited,n)==1){
            solve(x-1,y,arr,n,ans,visited,path+'U');
        }
        visited[x][y] = false;
        
    }
    vector<string> findPath(vector<vector<int>> &arr, int n) {
        // Your code goes here
        vector<string> ans;
        vector<vector<bool>> visited(n,vector<bool>(n,0));
        string path = "";
        if(arr[0][0] == 0){
            return ans;
        }
        solve(0,0,arr,n,ans,visited,path);
        return ans;
    }
};
