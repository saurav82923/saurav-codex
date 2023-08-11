class Solution 
{
    private:
    bool isSafe(int grid[N][N], int row, int col, int val){
        for(int i=0; i<N; i++){
            // check row
            if(grid[row][i] == val) return false;
            
            // check col
            if(grid[i][col] == val) return false;
            
            // check grid
            int rowLimit = 3*(row/3)+(i/3);
            int colLimit = 3*(col/3)+(i%3);
            if(grid[rowLimit][colLimit] == val) return false;
        }
        return true;
    }
    bool solve(int grid[N][N]){
        for(int row=0; row<N; row++){
            for(int col=0; col<N; col++){
                if(grid[row][col] == 0){
                    for(int val=1; val<=9; val++){
                        if(isSafe(grid, row, col, val)){
                            grid[row][col] = val;
                            if(solve(grid)){
                                return true;
                            }
                            grid[row][col] = 0;
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    public:
    //Function to find a solved Sudoku. 
    bool SolveSudoku(int grid[N][N])  
    { 
        solve(grid);
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                cout << grid[i][j] << " ";
            }
        }
    }
};