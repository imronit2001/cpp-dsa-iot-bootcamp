/*	Write a program to count the occurrence of a given character in a given string	*/
#include<stdio.h>
int main()
{
	char s[20],ch;
	int c,i;
	printf("Enter a string : ");
	fgets(s,20,stdin);
	fflush(stdin);
	printf("Enter a character you want to search the occurence of : ");
	scanf("%c",&ch);
	fflush(stdin);
	for(i=0,c=0;s[i];i++){
		if(s[i]==ch)
			c++;
	}
	printf("%c occurs %d times in the string \"%s\"",ch,c,s);
 return 0;
}

