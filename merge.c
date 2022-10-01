#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int MergeSort(int arr[],int left,int right);
int Merge(int arr[], int left, int mid, int right);

int main(){
	int arr[10];
	int size;
	printf("enter the size of array:");
	scanf("%d",&size);
	printf("enter the elements of array:\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	MergeSort(arr,0,size-1);
	printf("The array after sorting:\n");
	for(int i=0;i<size;i++){
	    printf("%d",arr[i]);
	}
}
int MergeSort(int arr[],int left,int right){
    if (left < right) {        
        int mid = (left+right)/2;       
        MergeSort(arr, left, mid);
        MergeSort(arr, mid + 1, right); 
        Merge(arr, left, mid, right);
    }
}

int Merge(int arr[], int left, int mid, int right)
{
    int LeftSize = mid - left + 1;
    int RightSize = right - mid; 
    int LeftSide[LeftSize], RightSide[RightSize];    
    for (int i = 0; i < LeftSize; i++){
        LeftSide[i] = arr[left + i];
	} 
    for (int j = 0; j < RightSize; j++){
        RightSide[j] = arr[mid + 1 + j];
	}	
    int i = 0 ,j=0,z=left;	  
    while (i < LeftSize && j < RightSize)
    {
        if (LeftSide[i] <= RightSide[j])
        {
            arr[z] = LeftSide[i];
            i++;
        }
        else
        {
            arr[z] = RightSide[j];
            j++;
        }
        z++;
    }
	while (i < LeftSize) {
        arr[z] = LeftSide[i];
		z++;
        i++;       
    }
    while (j < RightSize) {
        arr[z] = RightSide[j];
		z++;
        j++;       
    }
}








