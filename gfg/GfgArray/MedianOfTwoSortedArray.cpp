class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
        vector<double> v;
        for(int i=0;i<array1.size();i++){
            v.push_back(array1[i]);
        }
        for(int i=0;i<array2.size();i++){
            v.push_back(array2[i]);
        }
        sort(v.begin(),v.end());
        if(v.size()%2!=0)
            return v[v.size()/2];
        else{
            int a=v.size()/2;
            return double(v[a]+v[a-1])/2.0;
        }
    }
};