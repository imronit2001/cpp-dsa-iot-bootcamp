/*	Write a program which takes the day number of a week and displays a unique greeting message for the day.*/
#include<stdio.h>
int main()
{
	int m;
	printf("Enter a day no of week : ");
	scanf("%d",&m);
	switch(m){
		case 1 : printf("Sunday");
				 break;
		case 2 : printf("Monday");
				 break;
		case 3 : printf("Tuesday");
				 break;
		case 4 : printf("Wednesday");
				 break;
		case 5 : printf("Thursday");
				 break;
		case 6 : printf("Friday");
				 break;
		case 7 : printf("Saturday");
				 break;
		default	: printf("Invalid Choice");
	}
 return 0;
}

