/*	Write a program to print the strings which are palindrome in the list of strings.	*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s[3][20],t[20];
	int i;
	for(i=0;i<3;i++)
		fgets(s[i],20,stdin);
	for(i=0;i<3;i++){
		strcpy(t,s[i]);
		strrev(t);
		if(strcmp(s[i],t)==0)
		{
			printf("\n%s",s[i]);
		}
	}
 return 0;
}

