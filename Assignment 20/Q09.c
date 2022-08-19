/*	Write a program to print the elements of an array in reverse order.	*/
#include<stdio.h>
int main()
{
	int a[5],*p=NULL,i;
	p=a;
	printf("Enter 5 numbers : ");
	for(i=0;i<5;i++)
		scanf("%d",(p+i));
	for(i=4;i>=0;i--)
		printf("\t%d",*(p+i));
 return 0;
}

