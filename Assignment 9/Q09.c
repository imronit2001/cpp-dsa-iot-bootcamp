/*	Program to Convert even number into its upper nearest odd number Switch Statement.	*/
#include<stdio.h>
int main()
{
	int m;
	printf("Enter a number : ");
	scanf("%d",&m);
	switch(m%2==0){
		case 1 : printf("%d",m+1);
				 break;
		case 0 : printf("%d",m);
				 break;
		default	: printf("Invalid Choice");
	}
 return 0;
}

