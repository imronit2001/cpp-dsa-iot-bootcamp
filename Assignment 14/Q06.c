/*	Write a program to sort elements of an array of size 10. Take array values from the
user	*/
#include<stdio.h>
int main()
{
	int arr[10],i,j,t;
	printf("Enter 10 numbers : ");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	printf("\n Before Sorting : ");
	for(i=0;i<10;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n After Sorting : ");
	for (i = 0; i < 9; i++)
        for (j = 0; j < 9-i; j++)
            if (arr[j] > arr[j + 1])
            {
            	t=arr[j];
            	arr[j]=arr[j+1];
            	arr[j+1]=t;
			}
	for(i=0;i<10;i++){
		printf("%d\t",arr[i]);
	}
 return 0;
}

