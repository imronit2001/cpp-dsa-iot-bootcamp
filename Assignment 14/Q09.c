/*	Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user.	*/
#include<stdio.h>
#define N 5
int main()
{
	int arr[N],i;
	printf("Enter %d numbers : ",N);
	for(i=0;i<N;i++){
		scanf("%d",&arr[i]);
	}
	printf("Array : ");
	for(i=N-1;i>=0;i--){
		printf("%d\t",arr[i]);
	}
 return 0;
}

