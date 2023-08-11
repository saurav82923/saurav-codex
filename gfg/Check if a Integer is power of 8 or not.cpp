class Solution {
public:
    string is_power_of_eight(long long int n ) 
    {
        // Code here.
        while(n%8 == 0){
            n= n>>3;
        }
        if(n ==1)
            return "Yes";
        else
            return "No";
    }
};