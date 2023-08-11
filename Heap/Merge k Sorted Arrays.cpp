
class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code here
        vector<int> res;

    

        for(int i = 0; i < arr.size(); i++)

        {

           for(int j = 0; j < arr[i].size(); j++)

           {

              res.push_back(arr[i][j]);

           }

        }

        

        sort(res.begin(), res.end());

        return res;


        
    }
};
