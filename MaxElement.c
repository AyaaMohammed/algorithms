#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int MaxElement(int ar[],int Right,int Left);
int main(){
	int arr[]={4, 5, 8, 9, 10, 11, 7, 3, 2, 1};
	int size=sizeof(arr)/sizeof(arr[0]);
	int m=MaxElement(arr,size-1,0);
	printf("max: %d",m);
}
int MaxElement(int ar[],int Right,int Left){
	while(Right>Left){
		int med=(Left+Right)/2;
		if (ar[med] > ar[med+1]){
           Right = med;
		}
        else if (ar[med] < ar[med+1]){
           Left = med+1; 
		}
	}
	return ar[Left];
}

