/*	Write a program to read and display a 2D array of strings in C language.	*/
#include<stdio.h>
int main()
{
	char s[3][20];
	int i;
	for(i=0;i<3;i++)
		fgets(s[i],20,stdin);
	for(i=0;i<3;i++)
		printf("\n%s",s[i]);
 return 0;
}

