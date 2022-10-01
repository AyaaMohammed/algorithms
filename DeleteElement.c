#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	int arr[10];
	int size ,postion;
	printf("enter the size of array:");
	scanf("%d",&size);
	printf("enter the elements of array:\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter the postion of element to delete:");
	scanf("%d",&postion);
	if(postion>0 && postion<size){
		for(int i=postion-1;i<size;i++){
			 arr[i] = arr[i + 1];
		}	
		printf("the array after delete item:");
	    for(int i=0;i<size-1;i++){
		    printf("%d ",arr[i]);
	    }
	}	
	else{
		printf("error postion not exist in array..");
	}
}