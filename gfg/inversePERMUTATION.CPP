vector<int> inversePermutation(int arr[], int size) {
    vector<int> v(size);
    for(int i=0;i<size;i++){
        v[arr[i]-1]=i+1;
    }
    return v;
    
}