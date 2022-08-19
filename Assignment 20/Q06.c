/*	Write a program to calculate the length of the string using a pointer	*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s[20], *p=NULL;
	int i;
	p=s;
	printf("Enter a string : ");
	fgets(s,20,stdin);
	for(i=0;*(p+i);i++);
	printf("Length of string is %d",i-1);
 return 0;
}

