/*	Program to convert a positive number into a negative number and negative
number into a positive number using a switch statement.
	*/
#include<stdio.h>
int main()
{
	int m;
	printf("Enter a number : ");
	scanf("%d",&m);
	switch(m>=0){
		case 1 : m = -m ;
				 break;
		case 0 : m = -m;
				 break;
		default	: printf("Invalid Choice");
	}
	printf("M = %d",m);
 return 0;
}

