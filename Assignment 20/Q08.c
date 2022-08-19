/*	Write a program to compute the sum of all elements in an array using pointers	*/
#include<stdio.h>
int main()
{
	int a[5],*p=NULL,i,s=0;
	p=a;
	printf("Enter 5 numbers : ");
	for(i=0;i<5;i++)
		scanf("%d",(p+i));
	for(i=0;i<5;s+=*(p+i),i++);
	printf("Sum = %d",s);
 return 0;
}

