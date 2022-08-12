/*	Write a function to find the smallest number from the given array of any size. (TSRS)	*/
#include<stdio.h>
int minimum(int arr[],int N){
	int min,i;
	min=arr[0];
	for(i=1;i<N;i++){
		if(arr[i]<min)
			min=arr[i];
	}
	return min;		
}
int main()
{
	int arr[10],i;
	printf("Enter 10 numbers : ");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	printf("Min is : %d",minimum(arr,10));
 return 0;
}

