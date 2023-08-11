vector<string> orderString(string s[], int n)
    {
    	//code here.
    // 	vector<int>v1;
     	vector<string> v2;
    // 	for(int i=0;i<n;i++){
    // 	    v1.push_back(s[i].length());
    // 	}
    // 	int index1=min_element(v1.begin(),v1.end())- v1.begin();
    // 		int index2=max_element(v1.begin(),v1.end())- v1.begin();
    // 	v2.push_back(s[index1]);
    // 	v2.push_back(s[index2]);
    // 	return v2;
    sort(s,s+n);
    v2.push_back(s[0]);
    
    v2.push_back(s[n-1]);
    return v2;
    }