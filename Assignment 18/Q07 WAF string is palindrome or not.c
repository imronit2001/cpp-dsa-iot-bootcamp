/*	Write a function to check whether a given string is palindrome or not	*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s[20],t[20];
	printf("Enter a string : ");
	fgets(s,20,stdin);
	strcpy(t,s);
	strrev(s);
	puts(s);
	puts(t);
	printf("%d",strcmp(s,t));
	if(strcmp(s,t)==0)
		printf("YES Palindrome");
	else
		printf("NOT a Palindrome");
 return 0;
}

