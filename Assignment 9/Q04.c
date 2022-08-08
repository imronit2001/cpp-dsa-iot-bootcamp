/*
Write a menu driven program with the following options:
	a. Check whether a given set of three numbers are lengths of an	isosceles triangle or not
	b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not
	c. Check whether a given set of three numbers are equilateral triangle or not
	d. Exit

*/
#include<stdio.h>
int main()
{
	int x,a,b,c;
	while(1){
		printf("\n\n\t Enter three sides of triangle : ");
		scanf("%d%d%d",&a,&b,&c);
		if(a+b>c || b+c>a || c+a>b)
		{
			printf("\n\n\t Menu");
			printf("\n 1. Check whether a given set of three numbers are lengths of an	isosceles triangle or not");
			printf("\n 2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not");
			printf("\n 3. Check whether a given set of three numbers are equilateral triangle or not");
			printf("\n 0. Exit\t\t");
			scanf("%d",&x);
			switch(x){
				case 1 : if(a==b || b==c || c==a)
						 	printf("\t\t Isosceles Triangle");
						 else
						 	printf("\t\t Not Isosceles Triangle");
						 break;
				case 2 : if( a*a==b*b+c*c || b*b==a*a+c*c || c*c==b*b+c*c )
						 	printf("\t\t Right Angled Triangle");
						 else
						 	printf("\t\t Not Right Angled Triangle");
						 break;
				case 3 : if(a==b&&b==c)
						 	printf("\t\t Equilateral Triangle");
						 else
						 	printf("\t\t Not Equilateral Triangle");
						 break;
				case 0 : exit(0);
				default : printf("\n\t Invalid Choice\n\n");
			}
		}else{
			printf("\n\t Triangle Not Possible");
		}
	}
 return 0;
}

