/*	Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user.	*/
#include<stdio.h>
int main()
{
	int arr[10],i,s=0;
	float avg;
	printf("Enter 10 numbers : ");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
		s+=arr[i];
	}
	printf("Sum of numbers are : %0.2f",s/10.0);
 return 0;
}

