/*	Write a C program to sort a string array in ascending order	*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s[20],ch;
	int i,j;
	printf("Enter a string : ");
	fgets(s,20,stdin);
	for(i=0;i<strlen(s)-1;i++)
		for(j=0;j<strlen(s)-1-i;j++){
			if(s[j]>s[j+1]){
				ch=s[j];
				s[j]=s[j+1];
				s[j+1]=ch;
			}
		}
	printf("%s",s);
 return 0;
}
