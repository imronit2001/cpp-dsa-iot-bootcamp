/*	Write a function to find the greatest number from the given array of any size. (TSRS)	*/
#include<stdio.h>
int maximum(int arr[],int N){
	int max,i;
	max=arr[0];
	for(i=1;i<N;i++){
		if(arr[i]>max)
			max=arr[i];
	}
	return max;		
}
int main()
{
	int arr[10],i,max;
	printf("Enter 10 numbers : ");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	printf("Max is : %d",maximum(arr,10));
 return 0;
}

