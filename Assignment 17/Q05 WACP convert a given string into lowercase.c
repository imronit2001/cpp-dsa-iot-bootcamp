/*	Write a program to convert a given string into lowercase	*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	printf("Enter a string : ");
	fgets(s,20,stdin);
	strlwr(s);
	puts(s);
 return 0;
}

