// Program to find largest element in an array

#include<stdio.h>
#include<conio.h>
void main(){
	int arr[20],n,i,temp,j;
	printf("Enter the size of an array: ");
	scanf("%d",&n);
	printf("Enter %d elements in array: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int pos = arr[0];
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{		
			 if(arr[i]>arr[j])
	 			{
	 				temp = arr[i];
	 				arr[i] = arr[j];
	 				arr[j] = temp;
	 			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("	%d		",arr[i]);
	}
	printf("\nSecond largest element : %d " , arr[1]);
	}
