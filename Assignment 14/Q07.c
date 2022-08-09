/*	Write a program to find second largest in an array.Take array values from the user.	*/
#include<stdio.h>
int main()
{
	int arr[10],i,max,max2,j;
	printf("Enter 10 numbers : ");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	max=0;
	for(i=1;i<10;i++){
		if(arr[i]>arr[max])
			max=i;
	}
	if(max==0)
		j=1;
	else
		j=0;
	max2=j;
	for(i=0;i<10;i++){
		if(i!=max){
			if(arr[i]>arr[max2])
				max2=i;	
		}
	}
	printf("Max is : %d\n Max2 is : %d",arr[max],arr[max2]);
 return 0;
}

