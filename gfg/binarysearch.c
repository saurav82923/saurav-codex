#include<stdio.h>
#include<stdlib.h>
int binarysearch(int arr[],int low,int high,int key){
    while(low<=high){
        int mid=(low+high)/2;
        if(key==arr[mid])
            return mid;

        
        if(key>arr[mid]){
            low=mid+1;
        }
        if(key<arr[mid]){
            high=mid-1;
            }
            return -1;
    }
        
    
}
int main(){
    int a,key;
    printf("enter the size of array and element");
    scanf("%d %d",&a,&key);
    int arr[a];
    printf("give the input in the array");
    for(int i=0;i<a;i++)
        scanf("%d",&arr[i]);
      int k=  binarysearch(arr,0,a-1,key);
      printf("element found at %d",k);

}