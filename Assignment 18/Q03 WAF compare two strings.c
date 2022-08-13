/*	Write a function to compare two strings	*/
#include<stdio.h>
#include<string.h>
int cmp(char s[],char t[]){
	return strcmp(s,t);
}
int main()
{
	char s[20],t[20];
	printf("Enter string1 : ");
	fgets(s,20,stdin);
	printf("Enter string2 : ");
	fgets(t,20,stdin);
	if(cmp(s,t)==0){
		printf("Both Strings are equal");
	}else{
		printf("String are not equal");
	}
	
 return 0;
}

