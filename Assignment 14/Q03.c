/*	Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.	*/
#include<stdio.h>
int main()
{
	int arr[10],i,even=0,odd=0;
	printf("Enter 10 numbers : ");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
		if(arr[i]%2)
			odd++;
		else
			even++;
	}
	printf("Total Even Numbers : %d\tTotal Odd Numbers : %d",even,odd);
 return 0;
}


