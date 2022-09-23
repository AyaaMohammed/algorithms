#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int Swap(int*,int*);
int Partition(int arr[],int start,int end);
int SwapSort(int arr[],int start,int end);
int main(){
	int a[8]={3,2,6,4,7,4,8,9};
	int size=sizeof(a)/sizeof(a[0]);
	SwapSort(a,0,size-1);
	printf("The array after sorting:\n");
	for(int i=0;i<size;i++){
	    printf("%d ",a[i]);
	}
}
int Partition(int arr[],int start,int end){
	int pivot =arr[end];
	int i = start-1;
	for(int j=start;j<=end-1;j++){
		if(pivot>arr[j]){
			i++;
			Swap(&arr[i],&arr[j]);
		}			
	}
	Swap(&arr[i+1],&arr[end]);
	return(i+1);
}
int SwapSort(int arr[],int start,int end){
	if(end>start){
		int p =Partition(arr,start,end);
		SwapSort(arr,start,p-1);
		SwapSort(arr,p+1,end);
	}
}
int Swap(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}