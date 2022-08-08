/*
Write a menu driven program with the following options:
	a. Addition
	b. Subtraction
	c. Multiplication
	d. Division
	e. Exit
*/
#include<stdio.h>
int main()
{
	int x,a,b,c;
	while(1){
		printf("\n\n\t Menu");
		printf("\n 1. Addition\t\t2. Subraction");
		printf("\n 3. Multiplication\t4. Division");
		printf("\n 0. Exit\t\t");
		scanf("%d",&x);
		switch(x){
			case 1 : printf("\n\t Enter two numbers : ");
					 scanf("%d%d",&a,&b);
					 printf("\t\t %d + %d = %d",a,b,a+b);
					 break;
			case 2 : printf("\n\t Enter two numbers : ");
					 scanf("%d%d",&a,&b);
					 printf("\t\t %d - %d = %d",a,b,a-b);
					 break;
			case 3 : printf("\n\t Enter two numbers : ");
					 scanf("%d%d",&a,&b);
					 printf("\t\t %d * %d = %d",a,b,a*b);
					 break;
			case 4 : printf("\n\t Enter two numbers : ");
					 scanf("%d%d",&a,&b);
					 if(b==0)
					 	printf("\n\t\t Denominator can\'t be Zero.");
					 else
					 	printf("\t\t %d + %d = %d",a,b,a+b);
					 break;
			case 0 : exit(0);
			default : printf("\n\t Invalid Choice\n\n");
		}
	}
 return 0;
}

