/*	Write a function in C to read n number of values in an array and display it in reverse order.	*/
#include<stdio.h>
#define N 5
void print(int arr[]){
	int i;
	printf("Array in Reverse Order : ");
	for(i=N-1;i>=0;i--){
		printf("%d\t",arr[i]);
	}
}
int main()
{
	int arr[N],i;
	printf("Enter %d numbers ",N);
	for(i=0;i<N;i++){
		scanf("%d",&arr[i]);
	}
	print(arr);
 return 0;
}

