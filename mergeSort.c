#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
void merge(int a1[],int a2[],int X ,int Y);
int main(){
	int arr1[5],arr2[5],x,y; 
	printf("enter size of frist array: \n");
	scanf("%d",&x);
	printf("enter elements of frist array:\n");
	for(int i=0;i<x;i++){
		scanf("%d",&arr1[i]);
	}
    printf("enter size of second array: \n");
	scanf("%d",&y);
	printf("enter elements of second array:\n");
	for(int i=0;i<y;i++){
		scanf("%d",&arr2[i]);
	}
	printf("merge two array:-\n");
	merge(arr1, arr2, x , y);
}
void merge(int a1[],int a2[],int X ,int Y){
	int size =X+Y;
	int i=0;
	int j=0;	
	int a3[20];
    for(i=0;i<X; i++)
	{
        a3[i] = a1[i];
	}    
    for(j=X;j<Y; j++)
    {
        a3[i] = a2[j];
        i++; 
    }
	for(i=0;i<size; i++)
    {
        for(int k=0;k<size-1;k++)
        {         
            if(a3[k]>=a3[k+1])
            {
                int temp=a3[k+1];
                a3[k+1]=a3[k];
                a3[k]=temp;
            }  
        }
    } 
    for(i=0; i<size; i++)
	{	
        printf("%d ", a3[i]);
    }	 
}