/*	Write a function in C to print all unique elements in an array.	*/
#include<stdio.h>
#define N 10
void func(int arr[]){
	int i,j;
	for(i=0;i<N-1;i++){
		for(j=0;j<i;j++){
			if(arr[i]==arr[j])
				break;
		}
		if(i==j)
			printf("%d\t",arr[i]);
	}
}
int main()
{
	int arr[N],i,count;
	printf("Enter %d numbers ",N);
	for(i=0;i<N;i++){
		scanf("%d",&arr[i]);
	}
	func(arr);
 return 0;
}

