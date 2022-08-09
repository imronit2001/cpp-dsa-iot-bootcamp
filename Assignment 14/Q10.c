/*	Write a program in C to copy the elements of one array into another array.Take array
values from the user.	*/
#include<stdio.h>
#define N 5
int main()
{
	int arr[N],arr2[N],i;
	printf("Enter %d numbers : ",N);
	for(i=0;i<N;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<N;i++){
		arr2[i]=arr[i];
	}
	printf("\nArray 1 : ");
	for(i=0;i<N;i++){
		printf("%d\t",arr[i]);
	}
	printf("\nArray 2 : ");
	for(i=0;i<N;i++){
		printf("%d\t",arr2[i]);
	}
 return 0;
}

