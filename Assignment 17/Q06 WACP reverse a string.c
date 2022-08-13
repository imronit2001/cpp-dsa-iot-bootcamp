/*	Write a program to reverse a string	*/
#include<stdio.h>
int main()
{
	char s[20];
	printf("Enter a string : ");
	fgets(s,20,stdin);
	strrev(s);
	puts(s);
 return 0;
}

