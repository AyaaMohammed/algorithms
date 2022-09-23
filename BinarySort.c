#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int BinarySearch(int arr[],int start,int end,int num);
int BinarySearch1(int arr[],int start,int end,int num);
int main(){
	int a[9]={3,2,6,14,7,4,8,9,1};
	int size=sizeof(a)/sizeof(a[0]);
	int number = 4;	
	int Search =BinarySearch(a,0,size-1,number);
	if(Search == -1){
		printf("Not Exist");
	}
	else{
		printf("the number in index: %d ",Search);
	}
}
int BinarySearch1(int arr[],int start,int end,int num){
	if(end>=start){
		int med =(end+start)/2;
		if(arr[med]==num){
			return med;
		}
		if(arr[med]>num){
			return BinarySearch(arr,start,med-1,num);
		}
		else{
			return BinarySearch(arr,med+1,end,num);
		}
	}
	return -1;
}
int BinarySearch(int arr[],int start,int end,int num){
	while(end>=start){
		int med =(end+start)/2;
		if(arr[med]==num){
			return med;
		}
		if(arr[med]>num){
			end=med-1;
		}
		else{
			start=med+1;
		}
	}
	return -1;
}