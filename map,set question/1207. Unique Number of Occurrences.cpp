class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
         
        // Count the frequencies of every element 
        unordered_map<int,int> mp ;
        for( auto it : arr ){
            mp[it]++ ;
        }

        // Count the unique frequencies
        set<int> st ;
        for( auto it : mp ){
            // if the frequency already exist 
            if( st.count( it.second ) ){
                return false ;
            }
            else st.insert( it.second );
        }

        // No two elements having same frequency 
        return true ;

    }
};