/*	Write a function to rotate an array by n position in d direction. The d is an indicative
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
	*/
#include<stdio.h>
void shift(int arr[],int n,int times){
	int t,i,j;
	for(j=1;j<=times;j++){
		t=arr[0];
		for(i=0;i<n-1;i++){
			arr[i]=arr[i+1];
		}
		arr[i]=t;
	}
}
int main()
{
	int arr[10],i;
	printf("Enter 10 numbers : ");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	printf("\n Before Shifting : ");
	for(i=0;i<10;i++){
		printf("%d\t",arr[i]);
	}
	shift(arr,10,2);
	printf("\n After Shifting : ");
	for(i=0;i<10;i++){
		printf("%d\t",arr[i]);
	}
	
 return 0;
}

