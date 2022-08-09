/*	Write a program to find the second smallest number in an array.Take array values
from the user	*/
#include<stdio.h>
int main()
{
	int arr[10],i,min,min2,j;
	printf("Enter 10 numbers : ");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	min=0;
	for(i=1;i<10;i++){
		if(arr[i]<arr[min])
			min=i;
	}
	if(min==0)
		j=1;
	else
		j=0;
	min2=j;
	for(i=0;i<10;i++){
		if(i!=min){
			if(arr[i]<arr[min2])
				min2=i;	
		}
	}
	printf("Min is : %d\n Min2 is : %d",arr[min],arr[min2]);
 return 0;
}

