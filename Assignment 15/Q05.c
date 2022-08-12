/*	Write a function to find the first occurrence of adjacent duplicate values in the array.
Function has to return the value of the element.	*/
#include<stdio.h>
#define N 10
int func(int arr[]){
	int i,j;
	for(i=0;i<N-1;i++){
		if(arr[i]==arr[i+1])
			return i;
	}
	return -1;
}
int main()
{
	int arr[N]={6, 10, 5, 4, 9, 120, 4, 7, 10, 20};
	int index;
	index=func(arr);
	if(index>=0){
		printf("%d is the first adjecent repeating element",arr[index]);
	}else{
		printf("There is no repeating element");
	}
 return 0;
}

