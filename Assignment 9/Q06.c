/*	Program to check whether a year is a leap year or not. Using switch statement	*/
#include<stdio.h>
int main()
{
	int m;
	printf("Enter a year : ");
	scanf("%d",&m);
	switch(m%100){
		case 1 : if(m%400==0)
					printf("%d is a Leap Year",m);
				 else
				 	printf("%d is not a Leap Year",m);
				 break;
		case 0 : if(m%4==0)
					printf("%d is a Leap Year",m);
				 else
				 	printf("%d is not a Leap Year",m);
				 break;
		default	: printf("Invalid Choice");
	}
 return 0;
}

