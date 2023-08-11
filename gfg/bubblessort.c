#include<stdio.h>
#include<stdlib.h>
void swap(int *p,int *q){
    int a=*p;
    *p=*q;
    *q=a;
}
void bubblesort(int arr[],int a){
    for(int i=0;i<a-1;i++){
        for(int j=0;j<a-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
int main(){
    int a;
    printf("enter the size of array");
    scanf("%d",&a);
    int arr[a];
    printf("give the input in the array");
    for(int i=0;i<a;i++)
        scanf("%d",&arr[i]);
    bubblesort(arr,a);
    for(int j=0;j<a;j++){
        printf("%d ",arr[j]);
    }
    return 0;
}