/*	Write a program in C to count the total number of alphabets, digits and special
characters in a string	*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char s[20],ch;
	int i,alpha=0,digit=0,special=0;
	printf("Enter a string : ");
	fgets(s,20,stdin);
	for(i=0;s[i];i++){
		if(isalpha(s[i]))
			alpha++;
		else if(isdigit(s[i]))
			digit++;
		else
			special++;
	}
	printf("\nTotal no of alphabets = %d",alpha);
	printf("\nTotal no of digit = %d",digit);
	printf("\nTotal no of special char = %d",special);
 return 0;
}

