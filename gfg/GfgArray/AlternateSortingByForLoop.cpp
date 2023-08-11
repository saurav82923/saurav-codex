	public:
	vector<int> alternateSort(int arr[], int N)
	{
	    // Your code goes here
	    vector<int> v;
	    sort(arr,arr+N);
	    int i;
	    for( i=0;i<(N/2);i++){
	        v.push_back(arr[N-(i+1)]);
	       // v.push_back(arr[N-(i+N)]);
	       // if(N/2==i)
	       //   break;
	        v.push_back(arr[i]);

	        
	    }
	    if(i==(N-1)/2){
	        v.push_back(arr[N/2]);
	    }
	    return v;
	    