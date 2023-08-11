class Solution {
public:
void sort(vector<int> & v, int size){
     
        if(size == 0 || size == 1 )
            return ;
        for(int i=0; i<size-1; i++){
            if(v[i+1] < v[i])   
                swap(v[i] , v[i+1]);
            
        }
        
        sort(v,size-1);
}
    void sortColors(vector<int>& v) {
        int size= v.size();
        sort(v,size);
        
    }
};