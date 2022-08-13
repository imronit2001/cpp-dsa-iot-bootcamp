/*	Write a program to calculate the length of the string. (without using built-in method)	*/
#include<stdio.h>
int main()
{
	char s[20]="Ronit";
	int i;
	for(i=0;s[i];i++);
	printf("Length of string \"%s\" is %d",s,i);
 return 0;
}

