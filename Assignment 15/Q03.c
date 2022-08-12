/*	Write a function to sort an array of any size. (TSRN)	*/
#include<stdio.h>
void sort(int arr[],int n){
	int i,j,t;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
}
int main()
{
	int arr[10],i;
	printf("Enter 10 numbers : ");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	printf("\n Before Sorting : ");
	for(i=0;i<10;i++){
		printf("%d\t",arr[i]);
	}
	sort(arr,10);
	printf("\n After Sorting : ");
	for(i=0;i<10;i++){
		printf("%d\t",arr[i]);
	}
 return 0;
}

