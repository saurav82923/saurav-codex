	public:
	vector<int> alternateSort(int arr[], int N)
	{
	    // Your code goes here
	    vector<int> v;
	    sort(arr,arr+N);
	    int high=N-1;
	    int low=0;
	    while(low<high){
	        v.push_back(arr[high--]);
        
	       v.push_back(arr[low++]);
	       // if(N/2==i)
	       //   break;
	       // v.push_back(arr[i]);

	        
	    }
	    if(low==high)
	        v.push_back(arr[high]);
	    return v;
	    
	}