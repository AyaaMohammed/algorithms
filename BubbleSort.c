#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int BubbleSort(int arr[],int size);
int main(){
	int arr[10];
	int num;
	printf("please,Enter size of array: ");
	scanf("%d",&num);
	printf("Enter the element of arrya:\n ");
	for(int i=0;i<num;i++){
		scanf("%d",&arr[i]);
	}
	printf("Element after sorting:\n");
	BubbleSort(arr,num);
	for(int i=0;i<num;i++){
		printf("%d ",arr[i]);
	}
	
	}
int BubbleSort(int arr[],int size){
	for(int i=0;i<size-1;i++){
		int flag =0;
		for(int j=0;j<size-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0){
			break;			
		}
	}
}