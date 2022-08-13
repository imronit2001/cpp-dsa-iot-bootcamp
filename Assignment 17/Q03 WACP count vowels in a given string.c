/*	Write a program to count vowels in a given string	*/
#include<stdio.h>
int main()
{
	char s[20],ch;
	int i,v=0;
	printf("Enter a string : ");
	fgets(s,20,stdin);
	for(i=0;s[i];i++){
		ch=toupper(s[i]);
		if(ch==65||ch==69||ch==73||ch==79||ch==85)
			v++;
	}
	printf("Total no of vowels = %d",v); 
 return 0;
}

