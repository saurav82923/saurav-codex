void reverse(vector<int> &arr,int i,int e){
    if(i>=e)
        return ;
    swap(arr[i],arr[e]);
    reverse(arr,i+1,e-1);
}
void reverseArray(vector<int> &arr , int m)
{
	
    int a=arr.size();
    reverse(arr,m+1,a-1);
}