void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
    int start=m+1;
    int end=arr.size()-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
//    for(int i:arr){
//        cout<<i;
//    }
}
// 
