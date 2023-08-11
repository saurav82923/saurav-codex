
int minimum_apple(int arr[], int n){
    
    // Complete the function
    set<int > s;
    int count=0;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
        
    }
     for(auto i:s){
        
        count++;
    }
    return count;
    
    
}
