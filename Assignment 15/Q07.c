/*	Write a function in C to count a total number of duplicate elements in an array	*/
#include<stdio.h>
#define N 10
int func(int arr[]){
	int i,j,c=0;
	for(i=0;i<N-1;i++){
		for(j=i+1;j<N;j++){
			if(arr[i]==arr[j]){
				c++;
				break;
			}
		}
	}
	return c;
}
int main()
{
	int arr[N],i,count;
	printf("Enter %d numbers ",N);
	for(i=0;i<N;i++){
		scanf("%d",&arr[i]);
	}
	count=func(arr);
	printf("Total Duplicate Elements = %d",count);
 return 0;
}

