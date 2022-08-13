/*	Write a program to convert a given string into uppercase	*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	printf("Enter a string : ");
	fgets(s,20,stdin);
	strupr(s);
	puts(s);
 return 0;
}

