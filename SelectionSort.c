#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int Swap(int*,int*);
int SelectionSort(int arr[],int Size);
int main(){
	int a[8]={3,2,6,4,7,4,8,9};
	int size=sizeof(a)/sizeof(a[0]);
	SelectionSort(a,size);
	printf("The array after sorting:\n");
	for(int i=0;i<size;i++){
	    printf("%d ",a[i]);
	}
}
int Swap(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}
int SelectionSort(int arr[],int Size){
	for(int i=0;i<Size;i++){
		int min =i;
		for(int j=i+1;j<Size;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
			if(min != i){
				Swap(&arr[min],&arr[i]);
			}
		}
	}
}