/*	Write a program in C to copy one string to another string	*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s[20],t[20];
	printf("Enter a string : ");
	fgets(s,20,stdin);
	strcpy(t,s);
	puts(s);
	puts(t);
 return 0;
}

