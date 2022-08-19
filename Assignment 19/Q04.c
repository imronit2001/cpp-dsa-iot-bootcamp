/*	Write a program to search a string in the list of strings.	*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s[3][20],t[20];
	int i;
	for(i=0;i<3;i++)
		fgets(s[i],20,stdin);
	printf("\n Enter the string you want to search : ");
	fgets(t,20,stdin);
	for(i=0;i<3;i++){
		if(strcmp(s[i],t)==0)
		{
			printf("Found");
			return 0;
		}
	}
	printf("Not Found");
 return 0;
}

