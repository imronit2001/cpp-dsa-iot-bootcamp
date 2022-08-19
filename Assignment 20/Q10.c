/*	Write a program to print a string in reverse using a pointer	*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],*p=NULL;
	int i;
	p=a;
	printf("Enter a string : ");
	fgets(p,20,stdin);
	for(i=strlen(a);i>=0;i--)
		printf("%c",*(p+i));
 return 0;
}

