/*	Write a program to find the maximum number between two numbers using a pointer	*/
#include<stdio.h>
int max(int *p,int *q){
	if(*p>*q)
		return *p;
	else
		return *q;
}
int main()
{
	int a,b,c;
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	c=max(&a,&b);
	printf("Maximum is %d",c);
 return 0;
}

